#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
    string s;
    cin >> s;
    set<char> ss;
    set<char> :: iterator sit;
    map<char, int> mm;
    map<char, int> :: iterator it;
    for(size_t i=0; i<s.size(); i++){
        mm[s[i]]++;
    }
    for(it = mm.begin(); it != mm.end(); it++){
        if((*it).second == 1) ss.insert((*it).first);
    }
    for(sit = ss.begin(); sit != ss.end(); sit++){
        cout << *sit;
    }
    return 0;
}