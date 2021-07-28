// 1 counter in Bin
#include <iostream>
using namespace std;
unsigned int cnt = 0;

unsigned int countBits(unsigned long long n){
  if(n%2==1) cnt++;
  if(n==0) return cnt;
  return countBits(n/2);
}

int main(){
    int n;
    cin >> n;
    cout << countBits(n);
    return 0;
}