#include <iostream>
using namespace std;

unsigned LastFibb(int n){
    if(n<2) return 1;
    else{
        int a = 0;
        int b = 1;
        int c = 1;
        for(int i=2; i<=n; i++){
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
    cout << LastFibb(n)%10;
    return 0;
}