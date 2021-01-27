#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool Words(pair<string, int> a, pair<string, int> b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second > b.second;
}

int main(){
    freopen("input.txt", "r", stdin);
    map<string, int> mm;
    map<string, int> :: iterator it;
    vector<pair<string, int> > v;

    string s;
    while(cin >> s){
        mm[s]++;
    }

    for(it = mm.begin(); it != mm.end(); it++){
        v.push_back(make_pair((*it).first, (*it).second));
    }

    sort(v.begin(), v.end(), Words);

    for(int i=0; i<v.size(); i++){
        cout << v[i].first << " : " << v[i].second << endl;
    }

    return 0;
}