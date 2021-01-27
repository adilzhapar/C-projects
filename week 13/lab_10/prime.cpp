#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int x){
    x = abs(x);
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
    if(IsPrime(n)==true){
        cout << "yes";
    }else cout << "no";
}