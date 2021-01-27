#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int GetNumber(string s, int res){
    string num;
    for(size_t i=0;i<s.size();i++){
        int pos = -1;
        if(isdigit(s[i])==true){
            pos = i;
            num = s.substr(i);
            break;
        }
    }
    int dec = 1;
    for(int i=num.size()-1;i>=0;i--){
        res += dec*(num[i]-'0');
        dec*=10;
    }
    return res;
}

string ToString(int n, string s){
    if(n==0)
}

int main(){
    int n;
    string s="";
    cin >> n;
    string s = ToString(n);
    cout << s;
    
}