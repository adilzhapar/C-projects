#include <iostream>
using namespace std;

void Mirror(string s, int i){
    if(i==0){
        if(s[0]=='('){ 
            cout << ')';
            exit(0);
        }
        cout << s[0];
        exit(0);
    }else{
        if(s[i]=='(') cout << ')';
        else{
            cout << s[i];
        }
    }
    return Mirror(s, i-1);
}


int main(){
    string s;
    cin >> s;
    int size = s.size();
    cout << s;
    Mirror(s, size);
}