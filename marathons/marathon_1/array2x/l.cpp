#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int dig[n*m];
    for(int i=0;i<n*m;i++){
        dig[i]=i;
    }
    
    int q=0, s=0;
    while(q<=n+m-2){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i+j==q){
                    a[i][j]=dig[s];
                    s++;
                }
            }
        }
        q++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}