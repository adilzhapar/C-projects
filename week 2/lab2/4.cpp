#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    if(n<=k){
        cout << 2 << endl;
    }else{
        cout << n/k *2 +2 << endl;
    }
    return 0;
}