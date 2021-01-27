#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        if(m==a[i]){
            cout << i+1;
            break;
        }
        else if(m>a[i] and m<a[i+1]){
            cout << i+1;
            break;
        }
        else if(m>a[n-1]){
            cout << n;
            break;
        }
    }

    return 0;
}