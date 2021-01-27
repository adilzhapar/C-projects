#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    map<string, set<string> > m;
    map<string, set<string> > :: iterator it;

    set<string> ss;
    set<string> :: iterator sit;

    string s;

    for(int i=0; i<n; i++){
        getline(cin, s);
        int pos;
        for(size_t i=0; i<s.size(); i++){
            
        }
    }

    for(sit = s.begin(); sit != s.end(); sit++){
        cout << *sit << ": ";
        vector<string> v;
        for(it = m.begin(); it != m.end(); it++){
            if((*it).second.find(*sit)!=(*it).second.end()){
                v.push_back((*it).first);
            }
        }
        if(v.size()>1){
            for(int i=0; i<v.size(); i++){
                if(i==v.size()-1){
                    cout << v[i] << endl;
                }
                cout << v[i] << ", ";
            }
        }else{
            cout << v[0] << endl;
        }
    }
    return 0;
}