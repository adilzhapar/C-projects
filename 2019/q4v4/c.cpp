#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[m];
    for(int i=0;i<m; i++){
        cin >> arr[i];
    }
    if(n>=arr[n-1]-arr[0]){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;

}
