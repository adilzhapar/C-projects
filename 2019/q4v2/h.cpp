#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool Sequence(string s){
    vector<int> v;
    for(size_t i=0; i<s.size(); i++){
        v.push_back(s[i]-'0');
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++){
        if(v[i]+1!=v[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        if(Sequence(s)==true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
} 