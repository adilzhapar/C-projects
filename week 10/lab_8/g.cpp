#include <bits/stdc++.h>
using namespace std;
int cnt=0, k;

int isPrime(int i, vector<int> * v, int cnt){
    if(i>v->size()-1) return cnt;
    if (v->at(i) == 1) {
        if(v->at(i)<k) cnt--;
        return isPrime(i+1, v, cnt+1);
    }

    for (int j = 2; j * j <= v->at(i); ++ j){
        if (v->at(i) % j == 0) {
            return isPrime(i+1, v, cnt);
        }
    }
    if(v->at(i)<k) cnt--;
    return  isPrime(i+1, v, cnt+1);
}


int main(){
    int n, x;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    
    int m = isPrime(0, &v, cnt);

    cout << m;
    return 0;
}