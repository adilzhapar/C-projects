#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    int a[100000];
    int b[100000];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int c[n+m];
    for(int i=0;i<n+m;i++){
        if(i<n){
            c[i]=a[i];
        }else{
            c[i]=b[i-n];
        }
    }
    
    sort(c, c+n+m);
    for(int i=0;i<n+m;i++){
        cout << c[i] << " ";
    }
    
    return 0;
}