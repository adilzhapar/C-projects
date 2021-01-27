#include <iostream>
using namespace std;

void prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n % i==0){
            cout << "composite";
            exit(0);
        }
    }
    cout << "prime";
}

int main(){
    int n;
    cin >> n;
    prime(n);
    return 0;
}