#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    reverse(v.begin(), v.end());
    for(int i=0;i<n;i++){
        cout << v.at(i) << " ";
    }
    return 0;

}