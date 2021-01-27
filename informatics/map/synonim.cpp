#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    int n;
    map<string, string> m;
    cin >> n;
    string key, sin;
    for(int i=0;i<n;i++){
        cin >> key >> sin;
        m.insert(make_pair(key, sin));
    }
    map<string, string> :: iterator it;
    
    string s;
    cin >> s;
    for(it=m.begin(); it!=m.end(); it++){
        if(s==(*it).first) cout << (*it).second;
        else if(s==(*it).second) cout << (*it).first;
    }

    return 0;

}