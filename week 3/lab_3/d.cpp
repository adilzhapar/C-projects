#include <iostream>
using namespace std;

int main(){
    int size, max, i=0, l;
    cin >> size;
    int n[size];
    for(int i=0;i<size;i++){
        cin >> n[i];
    }
    max = n[0];
    for(i;i<size;i++){
        if(n[i]>= max){
            max = n[i];
            l = i;
        }
    }
    
    cout << l+1 << " ";
    return 0;
}