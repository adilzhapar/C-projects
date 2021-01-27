#include <iostream>

using namespace std;

int main(){
    int n, a, b, c, d, x;
    cin >> n;
    a = n % 2;
    b = (n / 2) % 2;
    c = (n / 4) % 2;
    d = (n / 8) % 2;
    x = 2*2*2*a + 2*2*b + 2*c + d;
    cout << x;
    return 0;
}