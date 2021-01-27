#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long i=1;
    while(i<=n){
        long long c = sqrt(i);
        if(c*c==i){
            cout << i << endl;
        }
        i++;
    }

    return 0;
}