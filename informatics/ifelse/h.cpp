#include <iostream>
using namespace std;
int main(){
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if(a==b and x==y){
        cout << "YES";
        return 0;
    }else if(a+b == x+y){
        cout << "YES";
    }else cout << "NO";
    return 0;
}