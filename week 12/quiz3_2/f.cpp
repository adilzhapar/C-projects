#include <iostream>
#include <set>
#include <vector>

using namespace std;
int main(){
    int n, m;
    cin >> n;
    set <string> s;
    set <string> t;
    string name;
    for(int i=0;i<n;i++){
        cin >> name;
        s.insert(name);
    }
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> name;
        t.insert(name);
    }
    /* vector<string> v;
    vector<string> z; */
    set<string> :: iterator it;
    cout << "Missed students: " << endl;
    for(it=s.begin(); it != s.end(); it++){
        if(t.find(*it)==t.end()) cout << "- " << *it << endl;
    }
    cout << "Not in the group: " << endl;
    for(it=t.begin(); it != t.end(); it++){
        if(s.find(*it)==s.end()) cout << "- " << *it << endl;
    }
    return 0;
}