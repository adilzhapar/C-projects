#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int max = INT_MIN;
    int rpos = 0;
    int rows[n];

    for(int i=0;i<n;i++){
        rows[i]=0;
    }

    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(a[i][j]>max){
                max = a[i][j];
                rpos = i;
            }
        }
    }
    
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==max){
                cnt++;
                for(int u=0;u<m;u++){
                    rows[i]+=a[i][u];
                }
            }
        }
    }

    int best = INT_MIN;
    int row = 0;

    if(cnt==1){
        cout << rpos;
        return 0;
    }else if(cnt>1){
        for(int i=0;i<n;i++){
            if(rows[i]>best){
                best = rows[i];
                row = i;
            }
        }
        cout << row;
        return 0;
    }
    return 0;
}