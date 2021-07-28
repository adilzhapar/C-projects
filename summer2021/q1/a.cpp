#include <iostream>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;
    
    for(auto i: arr){
        if(i < min){
            min = i;
        }
    }

    for(auto i: arr){
        if(i > max){
            max = i;
        }
    }
    cout << max - min << endl;
    return 0;
}