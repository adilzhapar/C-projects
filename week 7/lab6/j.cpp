#include <iostream>
using namespace std;

int a[4];
void read(){
    for(int i=0;i<4;i++){
        cin >> a[i];
    }
}

void best(){
    int max = a[0];
    for(int i=0;i<4;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout << max;
}

int main(){
    read();
    best();
    return 0;
}