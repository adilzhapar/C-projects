// Counting duplicates
#include <iostream>
#include <map>
using namespace std;

int duplicateCount(string s){
    map<char, int> m;
    for(size_t i=0; i<s.size(); i++){
        if(isupper(s[i])) s[i] = tolower(s[i]);
        m[s[i]]++;
    }
    int cnt=0;
    for(auto i: m){
        if(i.second > 1) cnt++;
    }
    return cnt;
}

int main(){
    string s;
    // cin >> s;
    cout << duplicateCount("");
}