#include <iostream>
using namespace std;

bool can(int n){
    if(n<1) return false;
    else if(n==1) return true;
    return (can(n-3) || can(n-5));
}

int main(){
    int n;
    cin >> n;
    if(can(n)==true) cout << "YES";
    else cout << "NO";
}