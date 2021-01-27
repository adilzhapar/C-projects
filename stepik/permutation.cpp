#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> *v){
    for(int i=0;i<v->size();i++){
        cout << v->at(i) << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i] = i+1;
    }
    
    while(next_permutation(v.begin(), v.end())){
        print(&v);
    }
    return 0;
}