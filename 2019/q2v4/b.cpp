#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int best = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>best) best = a[i];    
    }
    for(int i=0; i<n; i++){
        if(a[i]<best){
            cout << 0 << " ";
        }else cout << 1 << " ";
    }
    return 0;

}