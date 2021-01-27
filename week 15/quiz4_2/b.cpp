#include <iostream>
using namespace std;
int main(){
    int l, r;
    cin >> l >> r;
    int a, b, c, d;
    bool test = false;
    for(l; l<=r; l++){
        a=l/1000;
        b=l/100%10;
        c=l/10%10;
        d=l%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            test = true;
            break;
        }
    }
    if(test == true){
        cout << l;
    }else cout << "Understandable, have a great day";
    return 0;
}