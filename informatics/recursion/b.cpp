#include <iostream>
using namespace std;

int formax(string s){
    int best = 0;
    for(size_t i=0;i<s.size();i++){
        if(s[i]-'0'>best){
            best = s[i]-'0';
        }
    }
    return best;
}

int recmax(string s, int i,int best){
    if(i>s.size()-1) return best;
    if(s[i]-'0'>best) best = s[i]-'0';
    return recmax(s, i+1, best);
    
}


int main(){
    string s;
    cin >> s;
    int best = 0;
    // max(s, 0, best);
    cout << recmax(s, 0, best);
}