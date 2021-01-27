#include <iostream>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m, k;
    cin >> n >> m >> k;
    if(n*2>=2*m+2*k){
        cout << "YES";
    }else cout << "NO";
    return 0;
}