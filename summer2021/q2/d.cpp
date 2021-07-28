#include <iostream>
using namespace std;

bool Palindrome(string s){
    int n = s.size();
    for(int i=0; i<n / 2; i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    string s, t;
    cin >> s;
    int len = s.size();
    
    while(len > 0){
        t = s.substr(0, len);
        if(!Palindrome(t)){
            cout << t.size();
            return 0;
        }
        len--;
    }
    cout << 0;
}