#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int cnt[]={0, 0, 0};
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            cnt[0]++;
        }
        if(a[i]%3==0) cnt[1]++;
        if(a[i]%4==0) cnt[2]++;
    }
    for(int i=0; i<3; i++){
        cout << cnt[i] << " ";
    }
}