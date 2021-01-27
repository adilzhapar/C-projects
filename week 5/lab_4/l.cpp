#include <iostream>
using namespace std;
int main(){
    int n,m, r=0, c=0, min;
    long long sum =0;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements:" << endl;

    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            min = a[0][j];
            if(a[i][j]<min){ 
                min=a[i][j];
                r=i;
                c=j;
            }
        }
        cout << r+1 << ";" << c+1 << endl;
        sum = sum+min;
    }
    cout << "Their sum: " << endl;
    cout << sum;
    
    


    return 0;
}