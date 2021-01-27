#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    string s;
    set<char> ss;
    vector<char> v;
    vector<char> :: iterator it;
    cin >> s;
    for(size_t i=0; i<s.size(); i++){
        v.push_back(s[i]);
    }
    it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<=i; j++){
            cout << v[i];
        }
        cout << endl;
    }
    
    return 0;
}