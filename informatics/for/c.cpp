#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b;
    long long c;
    cin >> a >> b;
    for(a;a<=b;a++){
        c = sqrt(a);
        int z = a;
        if(c*c==z){
            cout << a << " ";
        }
    }
    
    return 0;
}