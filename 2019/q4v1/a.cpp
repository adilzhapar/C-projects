#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j]=0;
        }
    }
    int t;
    cin >> t;
    int x, y;
    for(int i=0; i<t; i++){
        cin >> x >> y;
        a[x][y]=1;
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==1) cnt++;
        }
    }
    cout << n*m-cnt;



    return 0; 
}