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
    int k;
    cin >> k;
    for(int i=0;i<v.size();i++){
        if(v[i]==k){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}