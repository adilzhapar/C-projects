#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(size_t i=0;i<s.size();i++){
        if(int(s[i])==122){
            s[i]=char(97);
        }else{
            s[i]=char(int(s[i])+1);
        }
    }
    cout << s; 
    return 0;
}