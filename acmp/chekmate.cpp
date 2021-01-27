#include <bits/stdc++.h>
using namespace std;
string s;
bool first(string s){
    if(s.length()>5) return false;
    else if(s[2]!='-') return false;
    else if(s[1] < '1' or s[1] > '8') return false;
    else if(s[4] < '1' or s[4] > '8') return false;
    else if(s[0] < 'A' or s[0] > 'H') return false;
    else if(s[3] < 'A' or s[3] > 'H') return false;
    return true;
}

bool second(string s){
    if(abs((s[0]-'0')-(s[3]-'0')== 1) and (abs((s[1]-'0')-(s[4]-'0')== 2) or (abs(s[0]-'0')-(s[3]-'0')== 2) and (abs(s[1]-'0')-(s[4]-'0')==1))){
        return true;
    }else return false;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    cin >> s;
    if(first(s)){
        if(second(s)){
            cout << "YES";
            return 0;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "ERROR";
    return 0;
}