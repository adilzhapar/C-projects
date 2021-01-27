#include <iostream>
using namespace std;

string toBin(int n, string s){
    if(n==0) return s;
    return toBin(n/2, char(n%2+48)+s);
}


int main(){
    int n;
    string s = "";
    cin >> n;
    cout << toBin(n, s);
    return 0;
}