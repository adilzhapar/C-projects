#include <iostream>
using namespace std;

int ForPow(int x, int n){
    if(n==0) return 1;
    if (n==1) return x;
    int d = x;
    for(int i=1; i<n; i++){
        x *= d;
    }
    return x;
}

int main(){
    int a, n;
    cin >> a >> n;
    cout << ForPow(a, n);
}