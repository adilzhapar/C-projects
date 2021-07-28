#include <iostream>
using namespace std;

int main(){
    string s, t="";
    cin >> s;
    int x=0, y=0;

    for(size_t i=0; i<s.size(); i++){
        if(s[i] == char(82)) x++;
        if(s[i] == char(76)) x--;
        if(s[i] == char(70)) y++;
        if(s[i] == char(66)) y--;
    }

    while(x!=0 && x!=y){
        if(y > 0){
            y--;
            t += "B";
        }
        if(y < 0){
            y++;
            t += "F";
        }
        if(x > 0){
            x--;
            t += "L";
        }
        if(x < 0){
            x++;
            t += "R";
        }
    }
    cout << t;
    return 0;
}