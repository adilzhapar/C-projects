#include <iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(a; a<=b; a++){
        if(a%d==c){
            cout << a << " ";
        }
    }
    return 0;
}