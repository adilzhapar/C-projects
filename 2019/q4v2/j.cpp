#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    vector<int> v;
    while(cin >> n){
        if(n==0) break;
        else{
            v.push_back(n);
        }
    }
    if(v.size()%2==0){
        for(int i=0; i<v.size()/2; i++){
            cout << v[i] + v[v.size()-1-i] << " " ;
        }
    }else{
        for(int i=0; i<v.size()/2; i++){
            cout << v[i]+v[v.size()-1-i] << " ";
        }
        cout << v[v.size()/2];
    }
}