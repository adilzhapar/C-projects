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
    int max = INT8_MIN;
    int r=0;
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j and a[i][j]>max){
                max = a[i][j];
                r=i;
                c=j;
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << r+1 << ";" << c+1;

    return 0;
}