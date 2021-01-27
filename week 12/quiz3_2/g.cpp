#include <iostream>
using namespace std;

char Boss(string s, int i, char c){
    if(i>s.size()-1) return 0;
    if(isupper(s[i])){
        return s[i];
        exit(0);
    }return Boss(s, i+1, c);
}

int main(){
    string s;
    cin >> s;
    char c;
    if(Boss(s, 0, c)!=0) cout << Boss(s, 0, c);
    else cout << -1;
}