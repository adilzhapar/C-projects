#include <iostream>

using namespace std;

int main(){
    int n, a, odd=0, even=0;
    cin >> n;
    while(n>0){
        a = n%10;
        if(a%2==0){
            even += a;
        }else odd += a;
        n=n/10;
    }

    if(even > odd){
        cout << even;
    }else if(odd > even){
        cout << odd;
    }else{
        cout << even + odd;
    }
    return 0;
}