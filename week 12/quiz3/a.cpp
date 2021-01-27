#include <iostream>
using namespace std;

void Prime(int n, int size){
    int a[size];
    for (int i = 2; i < size; ++i){
        a[i] = 1;
    }
    int k = 1;
    int p = 2;
    while(k < n){
        for (int i = 2*p; i < size; i += p)
            a[i] = 0;
        for (int i = p + 1; i < size; ++i)
            if (a[i] == 1){
                p = i;
                break;
            }
            ++k;
    }
    cout << p << endl; 
}

int main(){
    int size = 100000;
    
    int n;
    cin >> n;
    
    Prime(n, size);
    return 0;
}