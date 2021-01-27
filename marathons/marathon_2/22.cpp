#include <iostream>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, cnt=0;
    cin >> n;
    while(n>0){
        if(n%2==1){
            cnt++;
        }
        n = n/2;
    }

    cout << cnt;
    return 0;
}