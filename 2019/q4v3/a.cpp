#include <iostream>
using namespace std;
const double PI = 3.141592653589793;

void Area(double d){
    printf("%.2f", d*d*PI);
}

int main(){
    double d;
    cin >> d;
    Area(d);
    return 0;
}