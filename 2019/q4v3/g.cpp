#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int min = INT_MAX;
    for(int i=0; i<n-1; i++){
        if(min > a[i]+a[i+1]){
            min = a[i]+a[i+1];
        }
    }
    cout << min;
}