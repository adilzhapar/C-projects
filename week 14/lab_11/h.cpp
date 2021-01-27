#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(size_t i=0; i<s.size(); i++){
        if(int(s[i])>90-n){
            s[i]=char(int(s[i])+n-26);
        }else{
            s[i]=char(int(s[i])+n);
        }
    }
    cout << s;
    return 0;
}