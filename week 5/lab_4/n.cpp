#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    if(n>=2){
        cout << 2 << " is prime" << endl << 3 << " is prime" << endl;
    }

    for(long long j=2;j<n;j++){
        for (int i = 2; i * i <= j; ++ i){
            if (j % i != 0) {
                cout << j << " is prime" << endl;
                break;
            }
        }
        
    }

    return 0;
}