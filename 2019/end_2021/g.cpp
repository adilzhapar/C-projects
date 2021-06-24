#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, l="";
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(l.find(s[i]) == string::npos){
            l += s[i];
        }
    }
    cout << l;
    return 0;

}