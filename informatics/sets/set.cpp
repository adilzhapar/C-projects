#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    while(1){
        int x;
        cin >> x;
        if(x==0) break;
        s.insert(x);
    }
    for(auto now : s){
        cout << now << " ";
    }
    return 0;
}