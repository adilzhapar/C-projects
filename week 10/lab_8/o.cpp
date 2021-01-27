#include <bits/stdc++.h>
using namespace std;
int main(){
    set<char> s;
    string c;
    cin >> c;
    for(size_t i=0; i<c.size(); i++){

        s.insert(tolower(c[i]));
    }
    cout << s.size() << endl;
    set<char> :: iterator it;
    for(it=s.begin(); it!=s.end(); it++){
        cout << *it << " ";
    }

    return 0;
}