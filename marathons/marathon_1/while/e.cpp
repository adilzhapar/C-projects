#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt=1;
    int i=2;
    if(n==0 || n==1){
        cout << 0;
        return 0;
    }
    while(n>i){
        i = i*2;
        cnt++;
    }
    cout << cnt;

    return 0;
}