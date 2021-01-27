#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string toBin(int n, string s){
    if(n==0) return s;
    return toBin(n/2, char(n%2+48)+s);
}

void Binary(int n){
    string s = "";
    string res=toBin(n, s);
    cout << res << endl;
}

int main(){
    int n, x;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }
    for_each(v.begin(), v.end(), Binary);
    return 0;
}