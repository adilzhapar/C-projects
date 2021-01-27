#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int n[size];
    for(int i=0;i < size;i++){
        cin >> n[i];
    }
    for(int i=0;i < size;i++){
        if(n[i]%2==1){
            cout << n[i] << " ";
        }else{
            continue;
        }
    }

    return 0;
}