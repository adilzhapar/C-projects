#include <iostream>
using namespace std;

int min(int a, int b, int c, int d){
    int m[4];
    m[0]= a;
    m[1]=b;
    m[2]=c;
    m[3]=d;
    int min = a;
    for(int i=0;i<4;i++){
        if(m[i]<min){
            min=m[i];
        }
    }
    return min;
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int ans = min(a,b,c,d);
    cout << ans;

    return 0;
}