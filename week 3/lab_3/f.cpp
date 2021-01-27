#include <iostream>

using namespace std;
int main(){
    int size;
    cin >> size;
    int n[size];
    for(int i=0; i<size;i++){
        cin >> n[i];
    }
    for(int i = size - 1; i >= 0; i--){
        cout << n[i] << " ";
    }

    return 0;
}