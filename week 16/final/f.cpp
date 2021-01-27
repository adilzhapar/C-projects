// adding reversed numbers
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

int main(){
    int n;
    cin >> n;
    string f, s;
    for(int i=0; i<n; i++){
        cin >> f >> s;
        reverse(f.begin(), f.end());
        reverse(s.begin(), s.end());
        int a = GetNumber(f, 0);
        int b = GetNumber(s, 0);
        int c = a+b;
        string z = "" + to_string(c);
        reverse(z.begin(), z.end());
        int res = GetNumber(z, 0);
        cout << res << endl;
    }
    return 0;
}