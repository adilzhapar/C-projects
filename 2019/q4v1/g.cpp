#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    float v;
    cin >> v;
    int s =0;
    for(int i=0; i<n-1; i++){
        s += abs(a[i]-a[i+1]);
    }
    printf("%.2f", s/v);
}