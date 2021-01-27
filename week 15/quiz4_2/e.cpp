#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Calendar(pair< pair<int, int>, int> a, pair< pair<int, int>, int> b){
    if(a.second == b.second && a.first.second == b.first.second){
        return a.first.first <= b.first.first;
    }else if(a.second == b.second){
        return a.first.second <= b.first.second;
    }else{
        return a.second <= b.second;
    }
}

int ToDay(string s){
    int a, b;
    a = s[0]-'0';
    b = s[1]-'0';
    return a*10+b;
}

int ToMonth(string s){
    int a, b;
    a = s[3]-'0';
    b = s[4]-'0';
    return a*10+b;
}

int ToYear(string s){
    int a, b, c, d;
    a = s[6]-'0';
    b = s[7]-'0';
    c = s[8]-'0';
    d = s[9]-'0';
    return a*1000+b*100+c*10+d;
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    vector< pair< pair<int, int>, int> >v;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        int d, m, y;
        d = ToDay(s);
        m = ToMonth(s);
        y = ToYear(s);
        v.push_back(make_pair(make_pair(d, m), y));
    }
    sort(v.begin(), v.end(), Calendar);

    for(int i=0; i<v.size(); i++){
        printf("%02i-%02i-%02i", v[i].first.first, v[i].first.second, v[i].second);
        cout << endl;
    }
}