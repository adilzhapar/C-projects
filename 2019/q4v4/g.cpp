#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n-2; i++){
        if(min > arr[i]+arr[i+1]+arr[i+2]){
            min = arr[i]+arr[i+1]+arr[i+2];
        }
    }
    cout << min;
    return 0;
}