#include <iostream>
using namespace std;

string s;
int n;
int cnt=0;

void str(){
    cin >> s >> n;
    
    for(size_t i=0;i<s.size();i++){
        if(int(s[i])>=48 and int(s[i])<=57){
            cnt++;
        }
    }
    if(cnt>=n){
        cout << "YES";
    }else{
        cout << "NO";
    }
}


int main(){
    str();
    return 0;
}