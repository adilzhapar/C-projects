#include <iostream>
using namespace std;

int Power(int a, int n, int i, int ans){
    if(i==n) return ans;
    return Power(a, n, i+1, ans*a);
}


int main(){
    int a, n; 
    cin >> a >> n;
    int ans = a;
    int answer = Power(a, n, 1, ans);
    cout << answer;
}