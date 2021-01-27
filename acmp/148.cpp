#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int i;
    if(a<=b){
        i=a;
    }else{
        i=b;
    }
    for(i; i>=1; i--){
        if(a%i==0 && b%i==0){
            cout << i;
            return 0;
        }
    }
    return 0;
}