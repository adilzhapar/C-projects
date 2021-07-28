#include <iostream>
using namespace std;

int main(){
    int a, b;
    string tip;
    cin >> a >> b >> tip;
    if(tip == "heat"){
        cout << max(a, b);
    }else if(tip == "freeze"){
        cout << min(a, b);
    }else if(tip == "auto"){
        cout << b;
    }else cout << a;
    return 0;
}