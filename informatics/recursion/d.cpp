#include <iostream>
#include <string>
using namespace std;

void Stars(string s, int i){
    if(i>s.size()-2){
        cout << s[s.size()-1];
        exit(0);
    }
    cout << s[i] << '*';
    return Stars(s, i+1);
}

int main(){
    string s;
    cin >> s;
    Stars(s, 0);
}