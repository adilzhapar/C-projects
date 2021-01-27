#include <iostream>
using namespace std;
unsigned int fib(unsigned int n){
    if(n < 1){
        return 0;
    }
    else if (n < 3){
        return 1;
    }
    else{
        int a[3];
        a[0] = 0;
        a[1] = 1;
        a[2] = 1;
        for(int i = 3; i <= n; i++){
            a[0] = a[1];
            a[1] = a[2];
            a[2] = a[0] + a[1];
        }
        return a[2];
    }
}

int main(){
    unsigned int n;
    cin >> n;
    cout << fib(n-1);    
}