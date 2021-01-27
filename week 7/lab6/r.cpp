#include <iostream>
using namespace std;

string s;
void up(){
    cin >> s;
    cout << char(toupper(s[0]));
}


int main(){
    up();
    return 0;
}