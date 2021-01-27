#include <iostream>
using namespace std;

long long Power(long long x, long long n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return x;
    }
    else if(n%2==0){
        return Power(x*x, n/2);
    }else{
        return Power(x*x, n/2)*x;
    }
}


int main(){
    int n;
    cin >> n;
    cout << Power(n, n);
}