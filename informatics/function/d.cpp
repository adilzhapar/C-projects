#include <iostream>
using namespace std;

bool Election(bool x, bool y, bool z){
    int a[2];
    a[0]=0;
    a[1]=0;
    if(x==0) a[0]++; else a[1]++;
    if(y==0) a[0]++; else a[1]++;
    if(z==0) a[0]++; else a[1]++;
    if(a[0]>a[1]) return false; else return true;
}


int main(){
    bool x, y, z;
    cin >> x >> y >> z;
    cout << Election(x, y, z);
    return 0;
}