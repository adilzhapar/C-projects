#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    set<string> myset;
    vector<string> v;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        if(myset.find(s)==myset.end()){
            myset.insert(s);
        }else{
            v.push_back(s);
            myset.erase(s);
        }
    }
    if(!v.empty()){
        for(int i=0; i<v.size(); i++){
            cout << v[i] << endl;
        }
    }else{
        cout << "Understandable, have a great day";
    }
    return 0;
}