#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);
    set<char> ss;
    for(size_t i=0; i<s.size(); i++){
        if(s[i]!=' '){
            ss.insert(s[i]);
        }
    }
    set<char> :: iterator it;

    vector<char> v;
    for(it = ss.begin(); it != ss.end(); it++){
        v.push_back(*it);
    }

    cout << "The anagram variants for string " << s << " are:" << endl;

    do{
        for(int i=0; i<v.size(); i++){
            cout << v[i];
        }
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));
    return 0;
}