#include <iostream>
using namespace std;
int main(){
    double k;
    cin >> k;
    if((k/2-2)%2==0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}