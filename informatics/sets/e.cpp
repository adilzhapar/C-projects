#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    set<int> s;
    while(cin >> x){
        if(s.find(x)==s.end()){
            cout << "NO\n";
            s.insert(x);
        }
        else cout << "YES\n";
    }
    return 0;
}