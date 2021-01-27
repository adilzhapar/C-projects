#include <iostream>
using namespace std;

int n, m;
int a[1000][1000];

void read(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
}

void out(){
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}



int main(){
    read();
    out();
    return 0;
}