#include <iostream>
#include <cmath>
using namespace std;

int Divider(int n, int i){
    if(i*i>=n) return i;
    if(n%i==0){
        return i;
        exit(0);
    }return Divider(n, i+1);
}

int main(){
    int n;
    cin >> n;
    cout << Divider(n, 2);
}