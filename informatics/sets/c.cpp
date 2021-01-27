#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    multiset<int> st;
    map<int, int> m;
    for(size_t i=0;i<s.size(); i++){
        if(isdigit(s[i])){
            st.insert(s[i]-'0');
            m[s[i]-'0']++;
        }
    }
    map<int, int> :: iterator it;
    bool test = false;
    for(it = m.begin(); it!= m.end(); it++){
        if((*it).second>1){
            cout << (*it).first;
            test = true;
        }
    }
    if(test==false) cout << "NO";
    return 0;
}