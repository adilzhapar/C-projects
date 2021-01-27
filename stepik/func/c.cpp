#include <iostream>
using namespace std;

bool IsPodoubleInSquare(double x, double y){
    return x>=-1 && x<=1 && y>=-1 && y<=1;
}

int main(){
    double x, y;
    cin >> x >> y;
    if(IsPodoubleInSquare(x, y)== true) cout << "YES";
    else cout << "NO";
    return 0;
}