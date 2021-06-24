#include <iostream>
using namespace std;
int main(){
    int n, cnt=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<n-2; i+=2){
        if(arr[i+1] - arr[i] >= 3) cnt++;
    }

    cout << cnt;
    return 0;

}