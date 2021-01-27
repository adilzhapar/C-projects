#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    string s;
    stringstream ss;
    int cnt=0;
    while(cin >> s){
        ss << s;
        ss >> s;
        cnt++;
    }
    cout << cnt;

    return 0;
}