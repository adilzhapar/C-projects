#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    while(a>b){
        if(a%2==1){
            a = a - 1;
            cout << "-1" << endl;
        }else if(a%2==0){
            if(a/2<b){
                a=a-1;
                cout << "-1" << endl;
            }else{
                a = a/2;
                cout << ":2" << endl;
            }
        }
    }
    return 0;
}