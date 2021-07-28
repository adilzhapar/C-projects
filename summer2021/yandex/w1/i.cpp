#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e;
    freopen("input.txt", "r", stdin);
    cin >> a >> b >> c >> d >> e;
    int s = d * e;
    int block1 = a * b;
    int block2 = a * c;
    int block3 = c * b;
    if(s >= block1 || s >= block2 || s >= block3){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
    
}