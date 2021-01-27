#include <iostream>
#include <cmath>
using namespace std;

int n;
int a[10000];
int b[10000];

void read(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
}
int d[10000];
int arr(){
    for(int i=0;i<n;i++){
        d[i]=abs(a[i]-b[i]);
        cout << d[i] << " ";
    }
}


int main(){
    read();
    arr();

    return 0;
}