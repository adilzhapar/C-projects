#include <bits/stdc++.h>
#include <iterator>
#include <set>
using namespace std;

int GetNumber(string s, int res){
    string num;
    for(size_t i=0;i<s.size();i++){
        int pos = -1;
        if(isdigit(s[i])==true){
            pos = i;
            num = s.substr(i);
            break;
        }
    }
    int dec = 1;
    for(int i=num.size()-1;i>=0;i--){
        res += dec*(num[i]-'0');
        dec*=10;
    }
    return res;
}

int ADD(string s, set<int> *myset){
    int res = GetNumber(s, 0);
    myset->insert(res);
    return res;
}

void PRESENT(string s, set<int> myset){
    int res = GetNumber(s, 0);
    set<int> :: iterator it;
    for(it=myset.begin(); it!=myset.end(); it++){
        if(res==*it){
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;
}

void COUNT(set<int> *myset){
    cout << myset->size() << endl;
}



int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    set<int> myset;
    string s;
    int n;
    cin >> n;
    string arr[n];
    for(int i=0;i<n;i++){
        getline(cin, s);
        if(s.substr(0, 3)=="ADD") ADD(s, &myset);
        else if(s.substr(0, 5)=="COUNT") COUNT(&myset);
        else if(s.substr(0, 7)=="PRESENT") PRESENT(s, myset);
    }
    
    
    return 0;
}