#include <iostream>

using namespace std;
int main(){
    int n,a,b;
    cin >> n >> a >> b;
    if(a>=n){
        cout << 1;
    }else if(a<=b){
        cout << "NO";
    }else{
        cout << (1 + (n - b - 1) / (a - b));
    }
}