#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    freopen("input.txt", "r", stdin);
    int n, x;
    cin >> n;
    
    map<int, int> mm;
    map<int, int> :: iterator it;
    
    for(int i=0; i<n; i++){
        cin >> x;
        mm[x]++;
    }
    int max = INT_MIN;

    for(it = mm.begin(); it != mm.end(); it++){
        if((*it).second > max) max = (*it).second;
    }
    
    vector<int> v;
    for(it = mm.begin(); it != mm.end(); it++){
        if((*it).second == max){
            v.push_back((*it).first);
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    for(auto i: v){
        cout << i << " ";
    }
    return 0;
}