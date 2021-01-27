#include <iostream>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    if(n*m>k){
        if((n*m-k)%2==0){
        cout << "YES";
        }else cout << "NO";
    }else{
        cout << "NO";
    }
    
    return 0;
}