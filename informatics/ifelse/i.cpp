#include <iostream>
using namespace std;
int main(){
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if(a==x || b == y){
        cout << "YES";
    }else if(a==b && x==y){
        cout << "YES";
    }else if(a+b==x+y){
        cout << "YES";
    }else if(x-a==y-b){
        cout << "YES";
    }else cout << "NO";
    return 0;
}