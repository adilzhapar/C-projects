#include <iostream>
using namespace std;
int main(){
    int x;
    int cnt=0;
    int i=1;
    cin >> x;
    while(i<=x){
        if(x%i==0){
            cnt++;
        }
        i++;
    }
    cout << cnt;
    return 0;
}