#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    set<int> st;
    int cnt=0;
    for(size_t i=0;i<s.size();i++){
        if(isdigit(s[i])){
            st.insert(s[i]-'0');
            cnt++;
        }
    }
    
    set<int> :: iterator it;
    if(cnt==0){ 
            cout << "NO";
            return 0;
        }
    else {
        for(it=st.begin(); it!= st.end(); it++){
            cout << *it;
        }
    }
    
    return 0;
}