#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool function(int a, int b){
    return b<a;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int x;

    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);    
    }

    sort(v.begin(), v.begin()+k-1);
    sort(v.begin()+k, v.end(), function);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
    
}