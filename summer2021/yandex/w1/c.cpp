// phone number
#include <iostream>
#include <string>
using namespace std;

string toNumber(string s){
    string t = "";
    for(size_t i=0; i<s.size(); i++){
        if(isdigit(s[i])) t += s[i];
    }
    if(t.size() < 11) t = "8495" + t;
    if(t[0] == '7'){
        t.replace(0, 1, 1, '8');
    }
    return t;
}

int main(){
    freopen("input.txt", "r", stdin);
    string s;
    cin >> s;
    s = toNumber(s);
    string t;
    string ans[3];
    for(int i=0; i<3; i++){
        cin >> t;
        if(s==toNumber(t)) ans[i] = "YES";
        else ans[i] = "NO";
    }
    for(auto i: ans){
        cout << i << endl;
    }

}