#include <iostream>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int cnt=0;
    string s;
    cin >> s;
    for(size_t i=0;i<s.length();i++){
        if(s[i]=='1'){
            cout << char(cnt+97);
            cnt=0;
        }else cnt++;
    }
    return 0;
}