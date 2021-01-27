#include <iostream>
using namespace std;
int main(){
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if(a+b-2<=0 && a+b+2>=16){
        cout << "NO";
    }else if(a+b+2>=x+y && a+b-2<=x+y){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}