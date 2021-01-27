#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long int a[n];
    long int t;
    cin >> t;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                if(t==a[i]+a[j]){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}