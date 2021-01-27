#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    int p, k;
    cin >> p >> k;
    v.insert(v.begin()+p, k);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}