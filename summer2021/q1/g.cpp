#include <iostream>
using namespace std;

int main(){
    int n, a, b, h=0, cnt=0;
    cin >> n >> a >> b;
    
    if(a==b){
        cout << "NO";
    }
    
    while(h < n){
        h += a;
        cnt++;
        if(h >= n){
            break;
        }else h -= b;
    }

    cout << cnt;
    return 0;
}