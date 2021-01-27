#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int arr[1000];
    for(int i=0;i<1000;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        arr[a[i]-1]++;
    }
    int max = INT_MIN;
    for(int i=0;i<1000;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i=1000;i>=0;i--){
        if(arr[i]==max){
            cout << i+1 << " ";
        }
    }

    return 0;
}
