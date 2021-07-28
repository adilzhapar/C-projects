// stop spinning my words
#include <iostream>
using namespace std;

string Reverse(string s){
    string t="";
    for(int i = s.size()-1; i >=0; i--){
        t += s[i];
    }
    return t;
}

int main(){
    string s;
    getline(cin, s);
    if(s.find(' ')==string::npos){
        if(s.size() >= 5){
            cout << Reverse(s);
        }
    }else{
        int pos = 0;
        for(size_t i=0; i<s.size(); i++){
            pos = s.find(' ', pos);
        }
    }
       
}