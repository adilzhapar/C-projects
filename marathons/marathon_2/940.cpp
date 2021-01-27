#include <iostream>

using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    string s;
    cin >> n;
    cin >> s;
    for(size_t i=2;i<s.size();i++){
        if(int(s[i])==32) s.erase(i, 1);
    }
    s.erase(n-1, 1);
    cout << s;
    return 0;
}