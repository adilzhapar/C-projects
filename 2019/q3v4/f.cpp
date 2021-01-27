#include <iostream>
using namespace std;

int ToOne(int n){
    if(n==1) return c;
    return 1+min(ToOne(n/3))
}

int main(){
    int n;
    cin >> n;
    int c=0;
    int ans = ToOne(n, c);
    return 0;
}