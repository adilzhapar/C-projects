#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int last = int(s[0]);
    for(size_t i=0;i<s.size();i++){
        if(int(s[i])>last){
            last=int(s[i]);
        }
    }
    cout << char(last);
    return 0;
}