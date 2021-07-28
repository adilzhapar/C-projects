#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int x = n - 1;
    // Upper-side of main diagonal:
    while(x > 0){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i + x == j){
                    cout << arr[i][j] << " ";
                }
            }
        }
        cout << endl;
        x--;
    }
    // Main diagonal:
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                cout << arr[i][j] << " ";
            }
        }
    }
    // Down-side of diagonal:
    cout << endl;
    while(x < n-1){
        x++;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i-x==j){
                    cout << arr[i][j] << " ";
                }
            }
        }
        cout << endl;
    }



    /*for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }*/
    return 0;
}