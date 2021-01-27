#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    int a, b;
    cin >> a >> b;
    reverse(v.begin()+a, v.begin()+1+b);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}