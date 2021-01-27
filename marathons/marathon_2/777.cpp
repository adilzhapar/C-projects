#include <iostream>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    if(k>n){
        cout << k-n;
    }else cout << 12-n+k;
    return 0;
}