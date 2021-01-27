#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(isdigit(s[0])){
        cout << "NO";
        return 0;
    }
    bool test = false;
    for(size_t i=0;i<s.size();i++){
        if(int(s[i])==95 || (int(s[i])>=48 && int(s[i])<=57) || (int(s[i])>=65 && int(s[i])<=90) || (int(s[i])>=97 && int(s[i])<=122)){
            test = true;
        }else test = false;
    }
    if(test == true) cout << "YES";
    else cout << "NO";
    return 0;
}