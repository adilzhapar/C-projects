#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    vector<int> b;
    vector<int> v(10);
    int n, x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        a.push_back(x);
    }
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> :: iterator it;
    it = set_intersection(a.begin(), a.end(), b.begin(), b.end(), v.begin());
    v.resize(it-v.begin());
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    return 0;

}