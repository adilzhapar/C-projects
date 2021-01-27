#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> v;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    reverse(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}