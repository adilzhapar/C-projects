#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt=0;
    for(size_t i=0;i<s.length();i++){
        if(int(s[i])==48 || int(s[i])==54 || int(s[i])==57){
            cnt++;
        }else if(int(s[i])==56){
            cnt += 2;
        }
    }
    cout << cnt;
    return 0;
}