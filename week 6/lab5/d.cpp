#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    
    for(size_t i=0;i<s.size() / 2;i++){
        if(s[i]==s[s.size()-i-1]){
            continue;
        }else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}