#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n>6){
        cout << 360-n*30;
    }else cout << n*30;
    return 0;
}