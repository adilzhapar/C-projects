#include <bits/stdc++.h>
using namespace std;

vector<pair<pair<string, string>, double> > v;

bool Sorting(pair<pair<string, string>, int> a, pair<pair<string, string>, int> b){
    if(a.second == b.second && a.first.first == b.first.first){
        return a.first.second < b.first.second;
    }else if(a.second == b.second){
        return a.first.first < b.first.first;
    }else{
        return a.second < b.second;
    }
}

double ToScore(string s){
    int x;
    if(s=="A+") x=4.00;
    else if(s=="A") x = (double)15/(double)4;
    else if(s=="B+") x = (double)7/(double)2;
    else if(s=="B") x = 3.00;
    else if(s=="C+") x = (double)5/(double)2;
    else if(s=="C") x = 2.00;
    else if(s=="D+") x = (double)3/(double)2;
    else if(s=="D") x = 1.00;
    else if(s=="F") x = 0;
    return x;
}

double GPA(string f, string l, int lessons){
    string mark;
    int x;
    int total=0;
    int sum;
    for(int i=0; i<lessons; i++){
        cin >> mark >> x;
        total += x;
        sum += x*ToScore(mark);
    }
    double result = sum/(double)total;
    v.push_back(make_pair(make_pair(f, l), result));
}


int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    string f, l;
    int x;
    for(int i=0; i<n; i++){
        cin >> f >> l >> x;
        GPA(f, l, x);
    }
    sort(v.begin(), v.end(), Sorting);
    for(int i=0; i<v.size(); i++){
        cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second << endl;
    }
}