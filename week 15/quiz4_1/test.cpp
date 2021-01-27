#include <iostream>
#include <map>
using namespace std;
int main(){
    string s;
    cin >> s;
    map<char, int> mm;
    for(size_t i=0; i<s.size(); i++){
        if((int(s[i])>=65 && int(s[i])<=90) || (int(s[i])>=97 && int(s[i])<=122)){
            mm[s[i]]++;
        }
    }
    map<char, int> :: iterator it;
    for(it = mm.begin(); it != mm.end(); it++){
        cout << (*it).first << " - " << (*it).second << endl;
    }
    return 0;
}