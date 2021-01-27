#include <bits/stdc++.h>
using namespace std;

bool IsSame(string f, string s){
    if(f.size()!=s.size()){
        return false;
        exit(0);
    }else{
        for(size_t i=0;i<s.size();i++){
            f[i]=tolower(f[i]);
            s[i]=tolower(s[i]);
        }
        for(size_t i=0;i<s.size();i++){
            if(s[i]==f[i]) return true;
            else if((s[i]=='b' && f[i]=='p') || (f[i]=='b' && s[i]=='p')) return true;
            else if((s[i]=='i' && f[i]=='e') || (f[i]=='i' && s[i]=='e')) return true;
            else return false;

        }
    }
}

void Print(vector<pair<string, string> > v){
    for(int i=0;i<v.size(); i++){
        string f = v[i].first;
        string s = v[i].second;
        if(IsSame(f, s)) cout << "Yes\n";
        else cout << "No\n";
    }
}

int main(){
    int n;
    cin >> n;
    vector<pair<string, string> > v;
    string f, s;
    for(int i=0;i<n;i++){
        cin >> f >> s;
        v.push_back(make_pair(f, s));
    }
    Print(v);
    
    return 0;
}