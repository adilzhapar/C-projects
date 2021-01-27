#include <iostream>
using namespace std;

int main(){
    int size, max;
    cin >> size;
    int n[size];
    for(int i=0; i<size;i++){
        cin >> n[i];
    }
    max = n[0];
    for(int i=0; i<size;i++){
        if(n[i]>max){
            max = n[i];
        }else continue;
    }
    cout << max << endl;

    return 0;
}