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
    int a;
    cin >> a;
    v.erase(v.begin()+a);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}