#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool f(pair<string, double> a, pair<string, double> b){
    if(a.second==b.second){
        return b.first < a.first;
    }
    return b.second < a.second;
}

int main(){
    // freopen("input.txt", "r", stdin);
    int n; 
    cin >> n;
    vector< pair<string, double> > v;
    map<string, double> m;
    string s;
    double x;
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> s >> x;
        m[s]+=x;
        sum+=x;
    }
    map<string, double> :: iterator it;
    
    for(it = m.begin(); it != m.end(); it++){
        (*it).second = (*it).second*100/sum;
        v.push_back(make_pair( (*it).first, (*it).second ));
    }
    sort(v.begin(), v.end(), f);
    for(int i=0; i<v.size(); i++){
        cout << v[i].first << " " << v[i].second << "%" << endl;
    }
    return 0;
}