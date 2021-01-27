#include <iostream>
#include <cmath>
using namespace std;

bool IsPodoubleInRomb(double x, double y){
    return abs(x)+abs(y) <= 1;
}

int main(){
    double x, y;
    cin >> x >> y;
    if(IsPodoubleInRomb(x, y)== true) cout << "YES";
    else cout << "NO";
    return 0;
}