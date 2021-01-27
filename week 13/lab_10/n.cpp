#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Polindrome(vector<int> v){
    bool test = false;
    for(int i=0; i<v.size(); i++){
        if(v[i]==v[v.size()-1-i]){
            test = true;
        }else{
            return false;
        }
    }
    return test;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    
    while(next_permutation(v.begin(), v.end())){
        if(Polindrome(v)==true){
            for(int i=0;i<v.size(); i++){
                cout << v[i] << " ";
            }
            return 0;
        }
    }
    cout << "Impossible";
    return 0;
}