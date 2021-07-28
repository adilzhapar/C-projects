#include <iostream>
using namespace std;

bool Prime(int n){
    if(n <= 1) return false;
    if(n==2 || n==3) return true;
    for(int i=2; i<n/2+1; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int ord=1;
    while(1){
        ord++;
        if(Prime(ord)){
            n--;
        }
        if(n==0) break;
    }
    cout << ord;
}