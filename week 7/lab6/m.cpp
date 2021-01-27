#include <iostream>
using namespace std;

int n;
int a[100000];

void read(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}

void out(){
    for(int i=n-1;i>=0;i--){
        cout << a[i] << " ";
    }
}


int main(){
    read();
    out();
    return 0;
}