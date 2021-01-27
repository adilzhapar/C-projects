#include <iostream>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int cnt1=0, cnt2=0;
    int s = 1, m=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i+m]>=a[n-s]){
                cnt1+=a[i];
            }else{
                cnt1+= a[n-s];
                s++;
                m--;
                
            }
        }else{
            if(a[i]>=a[n-s]){
                cnt2+=a[i];
            }else{
                cnt2+= a[n-s];
                s++;
                m--;
                
            }
        }
        if(i+m==n-s) break;
        
    }
    cout << cnt1 << ":" << cnt2;

    return 0;
}