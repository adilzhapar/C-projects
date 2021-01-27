#include <bits/stdc++.h>

using namespace std;

void print(vector<char> *v){
    for(int i=0;i<v->size();i++){
        cout << v->at(i);
    }
    cout << endl;
}

int main(){
    string c;
    cin >> c;
    vector<char> v;
    for(size_t i=0;i<c.size(); i++){
        v.push_back(c[i]);
    }
    for(int i=0;i<v.size();i++){
        cout << v.at(i);
    }
    cout << endl;
    while(next_permutation(v.begin(), v.end())){
        print(&v);
    } 
    return 0;
}