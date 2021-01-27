#include <iostream>
#include <string>
using namespace std;

void Brackets(string s,size_t i){
    if(s.size()%2==0){
        if(unsigned(i)>s.size()-2){
            cout << s[s.size()-1] << ')';
            exit(0);
        }
        if(unsigned(i)<s.size()/2) cout << '(' << s[i];
        if(unsigned(i)>=s.size()/2) cout << s[i] << ')';
        return Brackets(s, i+1);
    }else{
        if(unsigned(i)>s.size()-2){
            cout << s[s.size()-1] << ')';
            exit(0);
        }
        if(unsigned(i)<s.size()/2) cout << '(' << s[i];
        else if(unsigned(i)==s.size()/2){ 
            cout << '(' << s[i] << ')';
        }
        else cout << s[i] << ')';
        return Brackets(s, i+1);
    }
}


int main(){
    string s;
    cin >> s;
    Brackets(s, 0);   
}