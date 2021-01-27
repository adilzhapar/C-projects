#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    long long s;
    cin >> x;
    s = sqrt(x);
    if(s*s==x){
        cout << "Yes";
    }else cout << "No";
    return 0;
}