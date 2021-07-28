#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    string s;
    int even=0, odd=0;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        int x = s[i]-'0';
        if(x % 2 == 0){
            even += x;
        }else{
            odd += x;
        }
    }
    if(even > odd){
        cout << even;
    }else if(odd > even){
        cout << odd;
    }else cout << even + odd;
    return 0;
}