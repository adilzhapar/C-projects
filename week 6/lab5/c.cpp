#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    for(size_t i=0;i<s.size(); i++){
        if(s.substr(i, t.size())==t){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    

    return 0;

}