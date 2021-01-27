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
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int k, cnt=0;
    cin >> k;
    for(int i=0;i<k;i++){
        cnt+=v[i];
    }
    cout << cnt;

    return 0;
}