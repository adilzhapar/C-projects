// Tree
#include <iostream>
using namespace std;

int main(){
    int n,c, s=0;
    cin >> n;
    c = n*2-1;
    char a[n][c];
    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){
            a[i][j]=char(42);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-s;j++){
            a[i][j]=char(46);
        }
        s++;
    }
    s=0;
    for(int i=0;i<n;i++){
        for(int j=c-1;j>n-1+s and j<c;j--){
            a[i][j]=char(46);
        }
        s++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}