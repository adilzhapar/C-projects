#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    map<string, set<string> > my_map;
    map<string, set<string> > :: iterator it;
    string s, c;
    for(int i=0; i<n; i++){
        cin >> s;
        while(1){
            cin >> c;
            my_map[s].insert(c);
            if(cin.get()=='\n') break;
        }
    }
    int a;
    cin >> a;
    vector<string> v;

    for(int i=0; i<a; i++){
        cin >> c;
        for(it = my_map.begin(); it != my_map.end(); it++){
            if((*it).second.find(c)!=(*it).second.end()){
                v.push_back((*it).first);
            }
        }
    }
    int q = v.size();
    for(int i=0; i<q; i++){
        cout << v[i] << endl;
    }
        
    
    return 0;
}