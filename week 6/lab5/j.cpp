#include <iostream>
using namespace std;
string s;
int main(){
    
    cin >> s;
    bool test = false;
    for(size_t i=0;i<s.size() / 2;i++){
        if(s[i]==s[s.size()-i-1]){
            test = true;
        }else{
            test=false;
        }
    }
    
    
    if(test == 1){
        cout << "YES";
        return 0;
    }else{
        s.append(1,s[0]);
        for(size_t i=0;i<s.size() / 2;i++){
            if(s[i]==s[s.size()-i-1]){
                continue;
            }else{
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}