// Sum of Digits / Digital Root
#include <iostream>
using namespace std;

int sum = 0;
int digital_root(int n, int sum=0){
    if(n==0 && sum / 10 > 0){
        n = sum;
        return digital_root(n, 0);
    }
    if(n==0) return sum;
    return digital_root(n/10, sum + n % 10);
}

int main(){
    int n;
    cin >> n;
    int x = digital_root(n);
    /*
    while(x / 10 != 0){
        x = digital_root(x);
        x /= 10;
    }*/
    cout << x;
}