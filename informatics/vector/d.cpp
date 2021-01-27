#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> v;
    int x;
    
    while(1){
        cin >> x;
        if(x==0) break;
        v.push_back(x);
    }
    int half = v.size()/2;
    reverse(v.begin(), v.begin()+half);
    reverse(v.begin()+half, v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}