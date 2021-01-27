#include <bits/stdc++.h> 
using namespace std; 

int RecPrimes(int n, int f, vector<int> *v){
    if(n<2) return f;
    if(n%f==0){
        RecPrimes(n/f, f, v);
        v->insert(v->begin(), f);
    }else{
        RecPrimes(n, f+1, v);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    RecPrimes(n, 2, &v);
    for(int i=0;i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}