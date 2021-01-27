#include <iostream>
#include <vector>
using namespace std;

bool Sum(int n, vector<int> &v){
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(n==v[i]+v[j]) return true;
        }
    }
    return false;
}

int main(){
    int n, m;
    cin >> n;
    vector<int> v;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }
    cin >> m;
    int arr[m];
    for(int i=0; i<m; i++){
        cin >> arr[i];
    }

    for(int i=0; i<m; i++){
        if(Sum(arr[i], v)==true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}