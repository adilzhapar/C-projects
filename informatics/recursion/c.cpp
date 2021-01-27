#include <iostream>
#include <string>
using namespace std;

/* int formax(string s){
    int best = 0;
    for(size_t i=0;i<s.size();i++){
        if(s[i]-'0'>best){
            best = s[i]-'0';
        }
    }
    return best;
} */

int SumOfDigits(string s, int i,int cnt){
    if(i>s.size()-1) return cnt;
    if(isdigit(s[i])) cnt++;
    return SumOfDigits(s, i+1, cnt);
    
}


int main(){
    string s;
    cin >> s;
    int cnt = 0;
    // max(s, 0, best);
    cout << SumOfDigits(s, 0, cnt);
    return 0;
}