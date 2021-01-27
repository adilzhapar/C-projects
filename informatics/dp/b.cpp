#include <iostream>
using namespace std;

int Ball(int n, int cnt){
    if(n==0) return cnt;
    return Ball(n-2, cnt+1);
}

int main(){
    int n;
    cin >> n;
    int cnt=0;
    cout << Ball(n, cnt);
    return 0;
}