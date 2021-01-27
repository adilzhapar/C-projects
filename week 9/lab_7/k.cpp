#include <iostream>
using namespace std;


/*int best(string s){
    int best = int(s[0]);
    for(size_t i=0;i<s.size();i++){
        if(int(s[i])>best){
            best = s[i];
        }
    }
    return best;
}*/

int RecBest(size_t i, string s, int best){
    if(i>s.size()-1) return best;
    else{
        if(int(s[i])>=best){
            return RecBest(i+1, s, s[i]);
        }else{
            return RecBest(i+1, s, best);
        }
    }
}


int main(){
    int best = INT8_MIN;
    string s;
    cin >> s;
    // string big = big(0, s, "");
    // cout << big;
    // cout << char(best(s));
    best = RecBest(0, s, best);
    cout << char(best);
    return 0;
}