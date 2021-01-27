#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    vector<int> b;
    vector<int> v;
    int x;
    while(cin >> x){
        a.push_back(x);
    }
    while(cin >> x){
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    vector<int> :: iterator it;
    it = set_union(a.begin(), a.end(), b.begin(), b.end(), v.begin());
    v.resize(it-v.begin());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
    
}