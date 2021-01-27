#include <iostream>
using namespace std;
int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if(x > y and x > z){
        cout << x;
    }else if(y>x and y>z){
        cout << y;
    }else if(z>x and z>y){
        cout << z;
    }else{
        cout << x;
    }
    return 0;
}