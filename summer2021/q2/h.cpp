#include <iostream>
using namespace std;

int main(){
    char c;
    string s, t;
    cin >> c >> s;
    for(auto i: s){
        if(i != c){
            t += i;
        }
    }
    cout << t;
    return 0;
}