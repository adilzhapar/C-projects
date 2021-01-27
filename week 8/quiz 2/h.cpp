#include <iostream>
using namespace std;
int main(){
    string c, s;
    cin >> c;
    cin >> s;
    for(size_t i=0;i<s.size();i++){
        if(int(c[0])==int(s[i])){
            s.erase(i, 1);
        }
    }
    cout << s;

    return 0;
}