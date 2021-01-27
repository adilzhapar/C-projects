#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if(abs(a-x)==1 && abs(b-y)==2 || abs(a-x)==2 && abs(b-y)==1){
        cout << "YES";
    }else cout << "NO";
    return 0;
}