#include <iostream>
using namespace std;
int main(){
    int x, cnt=0;
    while(1){
        cin >> x;
        if(x<0){
            cout << cnt;
            return 0;
        }else{
            cnt++;
        }
    }
}