#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<long> v;
    long x;
    
    while(1){
        cin >> x;
        if(x==0) break;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}