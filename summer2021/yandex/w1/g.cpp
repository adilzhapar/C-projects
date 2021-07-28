#include <iostream>
using namespace std;

int main(){
    int n, k, m;
    cin >> n >> k >> m;
    int cnt = 0;
    if(k > n || m > k){
        cout << 0;
        return 0;
    }
    while(n>=k){
        int zagatovki = n / k;
        int details = k / m;
        cnt += (zagatovki * details);
        n -= (zagatovki * k);
        n += (zagatovki * (k % m));
    }
    cout << cnt;
}