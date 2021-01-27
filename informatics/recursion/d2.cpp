#include <iostream>
#include <string>
using namespace std;

string Reverse(int n, int x, int i, string s){
    if(i==n) return s;
    cin >> x;
    s = char(32)+s;
    return Reverse(n, x, i+1, char(x+48)+s);
}

int main(){
    int n, x;
    string s = "";
    cin >> n;
    cout << Reverse(n, x, 0, s);
}