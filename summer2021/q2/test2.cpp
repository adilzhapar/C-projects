#include <iostream>
using namespace std;

int main(){
    int x = 1234;
    string s;
    s = to_string(x);
    string t = "";

    for(int i=s.size()-1; i >=0; i--){
        t += s[i];
    }
    cout << t;

}