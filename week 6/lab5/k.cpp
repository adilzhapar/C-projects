#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt=0;
    for(size_t i=0;i<s.size();i++){
        if(int(s[i])==97 or int(s[i])==101 or int(s[i])==105 or int(s[i])==111 or int(s[i])==117){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}