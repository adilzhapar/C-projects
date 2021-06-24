#include <iostream>
using namespace std;

int main(){
    int n, h, cnt=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> h;
    for(int i=0; i<n; i++){
        if(arr[i] >= h){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}