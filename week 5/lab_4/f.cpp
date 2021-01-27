#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int best = a[0][0];
    int r = 0;
    int c = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(best<a[i][j]){
                best = a[i][j];
                r = i;
                c = j;
            }
        }
    }

    cout << r+1 << " " << c+1;
    return 0;
}