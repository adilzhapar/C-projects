#include <iostream>
using namespace std;

int main(){
    int n, dollar;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> dollar;
    for(int i=0; i<n; i++){
        cout << arr[i] * dollar << " ";
    }
    return 0;
}