#include <iostream>
#include <map>
using namespace std;

int ToMap(string s, map<char, int> &m){
    for(size_t i=0; i<s.size(); i++){
        m[s[i]]++;
    }
}

int main(){
    string s, t;
    cin >> s >> t;
    map<char, int> map1;
    map<char, int> map2;
    map<char, int> :: iterator fit;
    map<char, int> :: iterator sit;
    ToMap(s, map1);
    ToMap(t, map2);
    sit = map2.begin();
    if(map1.size()!=map2.size()){
        cout << "NO";
        return 0;
    }
    for(fit = map1.begin(); fit != map1.end(); fit++){
        if( (*fit).first != (*sit).first && (*fit).second != (*sit).second){
            cout << "NO";
            return 0;
        }
        sit++;
    }
    cout << "YES";
    return 0;
    /* for(fit = map1.begin(); fit != map1.end(); fit++){
        cout << (*fit).first << " " << (*fit).second << endl;
    }
    cout << "----\n";
    for(sit = map2.begin(); sit != map2.end(); sit++){
        cout << (*sit).first << " " << (*sit).second << endl;
    } */
}