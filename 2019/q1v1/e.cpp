#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int cnt=0;
    while(n<=m){
        n *= 3;
        m *= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}