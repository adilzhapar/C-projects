#include <iostream>
#include <stack>
using namespace std;

int Calc(int x, int y, string op){
    if(op[0] == '+') return x+y;
    else if(op[0] == '-') return y-x;
    else if(op[0] == '*') return x*y;
}

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
    freopen("input.txt", "r", stdin);
    stack<int> digits;
    string s;
    int ans;
    while(cin >> s){
        if(isdigit(s[0])){
            digits.push(ToDigit(s));
        }else{
            int x = digits.top();
            digits.pop();
            int y = digits.top();
            digits.pop();
            ans = Calc(x, y, s);
            digits.push(ans);
        }
    }
    cout << ans;
    return 0;
}