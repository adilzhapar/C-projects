#include <iostream>
using namespace std;

void Generator(int m){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m; j++){
            cout << i << " " << j << endl;
        }
    }
}

void recGenerator(int i, int j, int m){
    if(j==m) exit(0);
    cout << i << " " << j << endl;
}

int main(){
    int n, m;
    cin >> n >> m;
    Generator(m);
}