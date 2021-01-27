#include <iostream>
using namespace std;

int ToDigit(string s){
    int dec=1;
    int k=0;
    for(int i = s.size()-1; i>=0; i--){
        k += (s[i]-'0')*dec;
        dec *= 10;
    }
    return k;
}

int main(){
    string s;
    cin >> s;
    int n = ToDigit(s);
    cout << n+1000;
}