#include <iostream>
using namespace std;

char c;

bool Boss(string s, int i, char c){
    if(i >= s.size()) 
        return 0;
    if(isupper(s[i])){
        c = s[i];
        cout << c;
        return true;
        exit(0);
    }return Boss(s, i+1, c);
}

int main(){
    string s;
    cin >> s;
    if(Boss(s, 0, c) == false){
        cout << -1;
    }
    return 0;
}