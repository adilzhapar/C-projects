#include <iostream>
using namespace std;

int main(){
    int counter=0;
    int i=0;
    int a[10000];
    do{
        cin >> a[i];
        i += 1;
        cout << a[i] << " ";
    }while(a[i]==0);
}