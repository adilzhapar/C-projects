#include <iostream>
using namespace std;
int main(){
    double x, p, y;
    cin >> x >> p >> y;
    int cnt=0;
    while(x<y){
        x = x+(x*p/100);
        cnt++;
    }
    cout << cnt;
    return 0;
}