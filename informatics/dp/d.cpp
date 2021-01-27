#include <iostream>
using namespace std;

int a[1001];

int f(int n){
    a[0]=a[1]=1;
    for(int i =2; i<=n; i++){
        if(i%2==0){
            a[i]=a[i/2]+a[i/2-1];
        }else{
            a[i]=a[i/2]-a[i/2-1];
        }
    }
    return a[n];
}

int main(){
    int n;
    cin >> n;
    
    cout << f(n);

    return 0;
}