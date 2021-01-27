#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n<4){
        cout << "YES";
        return 0;
    }
    for(int i=2; i<n/2; i+=2){
        if(i%2==0 && (n-i)%2==0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}