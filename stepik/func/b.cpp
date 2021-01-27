#include <iostream>
#include <cmath>
using namespace std;

double Distance(double a, double b, double c, double d){
    return sqrt(pow(c-a, 2)+pow(d-b, 2));
}

int main(){
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << Distance(a, b, c, d);
}