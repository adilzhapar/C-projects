#include <iostream>
using namespace std;

bool Polind(size_t i, string s){
    if(i>s.size()/2) return true;
    if(s[i]==s[s.size()-i-1]){
        return true;
    }else{
        return false;
        exit(0);
    }
    return Polind(i+1,s);
}


int main(){
    string s;
    cin >> s;
    if(Polind(0, s)==true){
        cout << "Yes";
    }else cout << "No";
    return 0;
}