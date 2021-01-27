#include <iostream>
using namespace std;

int min(int a, int b){
    if(a<=b) return a;
    else return b;
}

int min4(int a, int b, int c, int d){
    if(min(a, b)<=min(c, d)) return min(a, b);
    else return min(c, d);
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min4(a, b, c, d);
}