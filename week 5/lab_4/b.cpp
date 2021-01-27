#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i < n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int best = -1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(best<a[i][j]){
                best = a[i][j];
            }
        }
    }
    int secbest = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(secbest < a[i][j] and best > a[i][j]){
                secbest = a[i][j];
            }
    }
    }
    
    cout << secbest;
    return 0;
}