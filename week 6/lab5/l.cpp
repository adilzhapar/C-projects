#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a[26];
    for(int i=0;i<26;i++){
        a[i]=i+97;
    }
    
    for(int i=0;i<s.size();i++){
        if(int(s[i] != a[i])){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}