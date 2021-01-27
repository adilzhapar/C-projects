#include <iostream>
using namespace std;
int main(){
    string s;
    int l, r;
    cin >> s >> l >> r;
    cout << string(&s[l], &s[r+1]);
    return 0;
}