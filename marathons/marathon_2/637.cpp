#include <iostream>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k, cnt =0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> k;
    for(int i=0;i<n;i++){
        if(a[i]<=k) cnt+= a[i];
        else cnt+=k;
    }
    cout << cnt;
    return 0; 
}