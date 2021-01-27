#include <iostream>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, cnt=0;
    cin >> n;
    int a = n;

    while(a>0){
        if(a%2==1){
            cnt++;
        }
        a = a/2;
    }

    cout << n+cnt;
    return 0;
}