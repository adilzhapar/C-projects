#include <iostream>
#include <iomanip>
using namespace std;

double n, m;
double x;
int per(){
    cin >> n >> m;
    x = m*100/n;
    return x;
}


int main(){
    per();
    cout << setprecision(6) << x;
    return 0;
}