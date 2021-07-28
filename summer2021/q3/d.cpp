#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool Arabic(string s, string t){
    if(s.size()!=t.size()) return false;
    bool test = true;
    for(size_t i=0; i<s.size(); i++){
        if(s[i] != t[i]){
            if(s[i] == char(98) || s[i] == char(112)){
                if(t[i] != char(98) || t[i] != char(112)){
                    test = false;
                    break;
                }else test = true;
            }else if(s[i] == char(101) || s[i] == char(105)){
                if(t[i] != char(101) || t[i] != char(105)){
                    test = false;
                    break;
                }else test = true;
            }else test = false;
        }else test = true;
    }
    return test;
}

string lower(string s){
    for(size_t i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    string s, t;
    vector<string> answers;
    for(int i=0; i<n; i++){
        cin >> s >> t;
        s = lower(s);
        t = lower(t);
        if(Arabic(s, t)) answers.push_back("Yes");
        else answers.push_back("No");
    }

    for(auto i: answers){
        cout << i << endl;
    }
}