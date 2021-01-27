#include <bits/stdc++.h>

using namespace std;

int Calc(int x, int y, char op){
    if(op == '+') return x+y;
    else if(op == '-') return x-y;
    else if(op == '*') return x*y;
}

string First(char a, char b, char op, string s){
    s.insert(0, 1, b);
    s.insert(0, 1, ' ');
    s.insert(0, 1, op);
    s.insert(0, 1, ' ');
    s.insert(0, 1, a);
    return s;
}



int main(){
    int n;
    cin >> n;
    string start;
    char op;
    vector< pair<string, int> > v;
    char a, b;
    int x, y;
    pair<char, int> p1;
    pair<char, int> p2;

    for(int i=0; i<n; i++){
        cin >> op;
        cin >> a >> x >> b >> y;
        p1=make_pair(a, x);
        p2=make_pair(b, y);

        string s = First(p1.first, p2.first, op, start);

        v.push_back(make_pair(s, Calc(p1.second, p2.second, op)));
    }

    for(int i=0;i<v.size(); i++){
        cout << v[i].first << " = " << v[i].second << endl;
    }
    
    return 0;
}