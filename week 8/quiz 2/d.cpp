#include <iostream>
using namespace std;

bool test = false;

bool polin(string s){
    for(size_t i=0;i<s.size()/2;i++){
        if(s[i]==s[s.size()-1-i]){
           test = true;
        }else{
           test = false;
           return 0;
        }
    }
    return test;
}

int main(){
    string s;
    cin >> s;

    for(size_t i=0;i<s.size();i++){
        if(polin(s)==false){
            cout << s.size();
            return 0;
        }
        s.erase(s.size()-1-i,1);
        if(polin(s)==false){
            cout << s.size();
            return 0;
        }else{
            cout << 0;
            return 0;
        }
    }
    
    return 0;
}