#include <iostream>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int a, b, n;
    cin >> a >> b >> n;
    int d = b-a;
    cout << a+(n-1)*d;
    return 0;
}