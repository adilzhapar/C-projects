// Sharky and primes
#include <iostream>
using namespace std;

bool IsPrime(int x){
    if(x==0 || x==1){
        return false;
    }else if(x==2 || x == 3){
        return true;
    }
    bool test = true;
    for(int i=2; i*i<=x; i++){
        if(x%i==0){
            test = false;
            break;
        }else{
            test = true;
        }
        
    }
    return test;
}

int main(){
    int n;
    cin >> n;
    for(int i=2; i<n; i++){
        if(IsPrime(i)==true && IsPrime(n-i)==true){
            cout << i << " " << n-i;
            break;
        }
    }

}