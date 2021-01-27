#include <iostream>
using namespace std;
int main(){
    string s;
    char x;
    int n, cnt=0;
    cin >> s >> x >> n;
    
    for(size_t i=0;i<s.size();i++){
        if(int(s[i])==int(x)){
            cnt++;
        }
    }
    if(cnt==n){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
}