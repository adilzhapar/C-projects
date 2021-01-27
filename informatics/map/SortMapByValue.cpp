#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool MySort(pair< string, int > &a, pair< string, int > &b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second > b.second;
}

int main(){
    freopen("input.txt", "r", stdin);
    string s;
    map<string, int> mm;
    while(cin >> s){
        mm[s]++;
    }
    vector<pair<string, int> > v(mm.begin(), mm.end());
    sort(v.begin(), v.end(), MySort);
    for(long unsigned int i=0; i<v.size(); i++){
        cout << v[i].first << endl;
    }
}