#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    map<string, int> m;
    map<string, int> :: iterator it;
    vector<int> v;

    string s;
    while(cin >> s){
        if(!m.empty()){
            for(it = m.begin(); it != m.end(); it++){
                if((*it).first==s){
                    v.push_back((*it).second);
                    m[s]++;
                    break;
                }else{
                    v.push_back(0);
                    m[s]++;
                    // break;
                }
            }
        }else{
            v.push_back(0);
            m[s]++;
        }
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
