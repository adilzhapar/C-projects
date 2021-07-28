#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(c < 0){
        cout << "NO SOLUTION";
        return 0;
    }
    if(a == 0){
        if(pow(c, 2) == b){
            cout << "MANY SOLUTIONS";
            return 0;
        }else{
            cout << "NO SOLUTION";
            return 0;
        } 
    }
    float x = (pow(c, 2) - b) / a;
    if(x == int(x)) cout << x;
    else cout << "NO SOLUTION";
    
}