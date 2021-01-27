// Perfect pizza
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    set<string> list;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        list.insert(s);
    }

    vector<pair<string, string> > v;
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        string a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    string z;
    cin >> z;
    vector<string> last;
    for(int i=0; i<v.size(); i++){
        if(z==v[i].first){
            last.push_back(v[i].second);
        }else if(z==v[i].second){
            last.push_back(v[i].first);
        }
    }

    sort(last.begin(), last.end());
    cout << last.size() << endl;
    for(int i=0; i<last.size(); i++){
        cout << last[i] << " ";
        
    }
}