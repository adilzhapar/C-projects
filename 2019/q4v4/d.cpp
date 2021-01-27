#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0;i<m; i++){
        n *= 2;
    }
    cout << n;
    return 0;
}