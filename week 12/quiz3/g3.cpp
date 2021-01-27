#include <bits/stdc++.h> 
using namespace std; 

void RecPrimes(int n, int f){
    if(n==1) return;
    if(n % f){
        RecPrimes(n, f+1);
    }else{
        cout << f << " ";
        RecPrimes(n/f, f);
    }
}

int main(){
    int n;
    cin >> n;
    RecPrimes(n, 2);
    
    return 0;
}