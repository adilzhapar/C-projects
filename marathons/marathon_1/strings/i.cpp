#include <iostream>
using namespace std;
int main(){
    string s, sub;
    cin >> sub >> s;
    for(size_t i=0;i<s.size();i++){
        if(s.substr(i, sub.size())==sub){
            cout << "yes";
            return 0;
        }
    }
    cout << "no";

    return 0;
}