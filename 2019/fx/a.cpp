#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }

    reverse(v.begin()+l-1, v.begin()+r);
    
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}