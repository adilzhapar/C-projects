#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    vector<string> v;
    set<string> s;
    string name;
    for(int i=0; i<n; i++){
        cin >> name;
        if(s.find(name)==s.end()) s.insert(name);
        else{
            v.push_back(name);
            s.erase(name);
        }
    }
    for(auto i: v){
        cout << i << endl;
    }
}