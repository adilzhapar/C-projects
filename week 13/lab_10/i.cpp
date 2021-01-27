#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v, z;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
        z.push_back(x);
    }
    reverse(z.begin(), z.end());
    for(int i=0;i<v.size();i++){
        if(v[i]==z[i]){
            cout << "OK\n";
        }
        else{
            cout << "Instead of " << v[i] << " here was " << z[i] << endl;
        }
    }
    return 0;

}