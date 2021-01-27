#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    
    for(size_t i=0; i<s.size(); i++){
        for(i; i<t.size(); i++){
            if(s[i]!=t[i]){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    
    return 0;
}