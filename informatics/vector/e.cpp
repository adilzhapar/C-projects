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
    sort(v.begin(), v.end());
    if(v.size()%2==0){
        cout << v[v.size()/2-1] << " " << v[(v.size()/2)];
    }else cout << v[v.size()/2];
    return 0;
}