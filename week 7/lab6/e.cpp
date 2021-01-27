#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int a, b;
double c;

int res(){
    cin >> a >> b;
    c = sqrt(a*a + b*b);
    return c;
}

int main(){
    res();
    cout << setprecision(4) << c;
    return 0;
}