#include <iostream>
#include <set>

using namespace std;

int f(set<int> &s, int n, int m){
    int min;
    if(n<=m) min = n;
    else min = m;
    for(int i=1; i<=min; i++){
        if(n%i==0 && m%i==0){
            s.insert(i);
        }
    }
}



int main(){
    int n, m, k;
    cin >> n >> m >> k;
    set<int> s;
    f(s, n, m);
    set<int> :: iterator it=s.end();
    
    for(int i=0;i<k; i++){
        it--;
    }
    cout << *it;
    
    
    return 0;
}