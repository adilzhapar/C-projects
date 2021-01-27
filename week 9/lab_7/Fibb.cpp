#include <iostream>
using namespace std;

unsigned Fibb(unsigned n){
    if(n==1) return 0;
    if(n==2) return 1;
    return Fibb(n-1)+Fibb(n-2);
}

int main(){
    unsigned n;
    cin >> n;
    cout << Fibb(n);
    return 0;
}