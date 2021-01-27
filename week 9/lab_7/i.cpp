#include <iostream>
using namespace std;

int recsum(long n, long sum){
    cin >> n;
    if(n==0) return sum;
    return recsum(n, sum+n); 
    
}

int main(){
    long n;
    long sum = 0;
    cout << recsum(n, sum);
    return 0;
}