#include <iostream>
using namespace std;

int MaxDivisor(int n, int i){
    if(n%i==0) return i;
    return MaxDivisor(n, i-1);
}

int NumDivisors(int n, int i, int cnt){
    if(i>n/2) return cnt;
    if(n % i ==0) cnt++;
    return NumDivisors(n, i+1, cnt);
}

int F(int n, int sum=0){
    if(n==1) return sum;
    return F(MaxDivisor(n, n/2), sum + NumDivisors(n, 1, 0));
}

int main(){
    int n;
    cin >> n;
    int i = n/2;
    cout << F(n)+1;
    return 0;
}