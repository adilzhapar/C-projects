#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt=0;
    if(s.size()>15){ 
        cout << 0;
        return 0;
    }
    if(s[0]==char(46) || s[s.size()-1]==char(46)){
        cout << 0;
        return 0;
    }
    
    }
    for(size_t i=0;i<s.size();i++){
        if(s[i]==char(46) && s[i+1]==char(46)){
            cout << 0;
            return 0;
        }
        if(s[i]==char(46)){
            cnt++;
        }
    }
    if(cnt==3){
        cout << 1;
    }else{
        cout << 0;
    }
    return 0;
}