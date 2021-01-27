#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> v;
    int x;
    while(1){
        cin >> x;
        if(x==0) break;
        v.push_back(x);
    }
    vector<int>::iterator it;
    
    int s=0;
    for(it=v.begin(); it!=v.end(); it++){
        *it=(v.begin()+s)+(v.end()-s-1);
        v.erase(v.end()-s);
        s++;
    }

    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    return 0;
    
}