#include <iostream>
#include <cmath>
using namespace std;

double a;
int n;
double c;

int power(){
    cin >> a >> n;
    c = pow(a, n);
    return c;
}


int main(){
    power();
    cout << c;
    return 0;
}