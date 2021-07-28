#include <iostream>

using namespace std;

int main(){
    freopen("input.txt", "r",stdin);
    int n, h, m, s;
    cin >> n;
    h = n/3600;
    m=(n-h*3600)/60;
    s=(n-m*60-h*3600);
    printf("%02i:%02i:%02i",h, m, s);

    return 0;
}