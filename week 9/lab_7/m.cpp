#include <iostream>
using namespace std;

int natural(int i, int n){
    if(i==n){
        cout << n;
        return n;
        exit(0);
    }else cout << i << " ";
    return  natural(i+1, n);
}

int main(){
    int n;
    cin >> n;
    natural(1, n);
    return 0;
}