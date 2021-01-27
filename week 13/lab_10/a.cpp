#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> v;
    vector <int> z;
    for(int i=0;i<n;i++){
        string s;
        int x;
        cin >> s >> x;
        v.push_back(s);
        z.push_back(x);
    }
    sort(v.begin(), v.end());
    sort(z.begin(), z.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " " << z[i] << endl;
    }
}