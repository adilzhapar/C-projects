#include <iostream>
using namespace std;

unsigned Fib(unsigned n){
    if(n<1) return 0;
    if(n<3) return 1;
    else{
        int a = 0;
        int b = 1;
        int c = 1;
        for(int i=3; i<=n; i++){
            a = b;
            b = c;
            c = a+b;
        }
        return c;
    }
}

int main(){
    unsigned n;
    cin >> n;
    cout << Fib(n+1)%10;
    return 0;
}