#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    set<int> s;
    int x, sz;
    for(int i=0;i<n; i++){
        cin >> x;
        sz=s.size();
        s.insert(x);
        if(sz!=s.size()){
            v.push_back(x);
        }
    }
    for(int i=0;i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}