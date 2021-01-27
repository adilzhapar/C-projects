#include <iostream>

using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int t = r-1;
    for(int i=0;i<n;i++){
        if(i+1<l or i+1>r){
            cout << a[i] << " ";
        }else{
            cout << a[t] << " ";
            t -= 1;
        }
    }
    
    return 0;
}