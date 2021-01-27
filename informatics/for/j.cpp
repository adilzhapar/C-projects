#include <iostream>
using namespace std;
int main(){
    int x;
    int sum =0;
    for(int i=0;i<100;i++){
        cin >> x;
        sum += x;
    }
    cout << sum;
    return 0;
}