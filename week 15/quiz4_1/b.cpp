#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(size_t i=0; i<s.size(); i++){
        s[i]=char(122-(int(s[i])-97));
    }
    cout << s;
    return 0;
}