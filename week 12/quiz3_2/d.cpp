#include <iostream>
using namespace std;

int k;

int Fibb(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return Fibb(n-1)+k*Fibb(n-2);
}

int main(){
    int n;
    cin >> n>>k;
    cout << Fibb(n);
    return 0;
}