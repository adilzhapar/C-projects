#include <iostream>
using namespace std;

bool Xor(bool x, bool y){
    if(x^y==true) return true;
    else return false;
}


int main(){
    bool x, y;
    cin >> x >> y;
    cout << Xor(x, y);
    return 0;
}