#include <iostream>
#include <map>
#include <vector>

using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    map<int, int> ms;
    for(int i=0; i<n; i++){
        cin >> x;
        ms[x]++;
    }
    int q, t;
    cin >> q;
    vector<int> v;
    for(int i=0; i<q; i++){
        cin >> t;
        v.push_back(ms[t]);
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    return 0;
}