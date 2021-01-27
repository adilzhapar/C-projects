#include <iostream>
#include <vector>
using namespace std;

int toBin(int n, vector<int> &v, int i=7){
    if(n==0) return n;
    v[i]=n%2;
    return toBin(n/2, v, i-1);
}

int main(){
    int n, m;
    cin >> n >> m;
    if(n==m){
        cout << 0;
        return 0;
    }
    vector<int> a(8);
    vector<int> b(8);
    toBin(n, a);
    toBin(m, b);
    int cnt=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]) cnt++;
    }
    cout << cnt;
    return 0;
}