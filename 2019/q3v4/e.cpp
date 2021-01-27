#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    vector<char> v;
    set<char> ss;
    int sz;
    for(size_t i=0; i<s.size(); i++){
        sz = ss.size();
        ss.insert(s[i]);
        if(sz!=ss.size()){
            v.push_back(s[i]);
        }
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i];
    }
    return 0;
}