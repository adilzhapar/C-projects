#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    string s;
    vector<string> v;
    set<string> ms;
    int sz;
    while(cin >> s){
        sz = ms.size();
        ms.insert(s);
        if(sz!=ms.size()){
            v.push_back(s);
        }
    }
    cout << "Aida" << endl;
    for(int i=0; i<v.size(); i+=2){
        cout << v[i] << endl;
    }
    cout << "Aizhan" << endl;
    for(int i=1; i<v.size(); i+=2){
        cout << v[i] << endl;
    }
    

}