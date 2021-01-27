#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Polindrome(vector<int> v){
    bool test = false;
    for(int i=0;i<v.size()/2; i++){
        if(v[i]!=v[v.size()-1-i]){
            return false;
        }else{
            test = true;
        }
    }
    return test;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v;
    vector<int> t;
    int x;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> x;
            t.push_back(x);
        }
        v.push_back(t);
        t.clear();
    }
    if(Polindrome(v[0])==true && Polindrome(v[v.size()-1])==true){
        cout << "YES";
    }else{
        cout << "NO";
    }

}