#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int cnt=0;
    if(v[0]-n>=3) cnt++;
    for(int i=0; i<v.size(); i++){
        if(v[i+1]-v[i]>=3) cnt++;
    }
    cout << cnt;
}