#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]='.';
        }
    }

    for(int i=0; i<n; i++){
        if(i+49>57){
            arr[i][n-i-1]=char(i+40);
            arr[i][n-i]=char(i+39);
        }else{
            arr[i][n-i-1]=char(i+1+48);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}