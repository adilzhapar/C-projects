#include <iostream>
using namespace std;

int main(){
    int arr[4];
    for(int i=0; i<4; i++){
        cin >> arr[i];
    }
    for(int i=0; i<4; i++){
        if(!isalpha(char(arr[i]))){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}