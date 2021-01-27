#include <iostream>
using namespace std;
int prod = 1;
int fact(int n, int prod){
    if(n==0) return prod;
    return fact(n-1, prod) * n;
}


int main(){
    int n;
    cin >> n;
    prod = fact(n, prod);
    cout << prod;
    return 0;
}