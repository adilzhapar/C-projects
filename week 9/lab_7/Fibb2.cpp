#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
    unsigned int a ,b;
    unsigned int k;
    a=0;
    b=1;
    cin >> k;
    // k = k-1;
    while (k!=0){
        a=a+b;
        b=a-b;
        k=k-1;
    }
    cout << a;
    return 0;
}