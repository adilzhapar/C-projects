#include <iostream>
#include <string>
using namespace std;
int main(){
    char x = 'a';
    char op = '+';
    char y = 'b';
    string s;
    s.insert(0, 1,  y);
    s.insert(0, 1, op);
    s.insert(0, 1, x);
    cout << s;
}


cout << "Missed students: " << endl
for(it=s1.begin(); it!=s1.end();++it){
        if(s2.find(*it)==s2.end()) cout << "- " << *it << endl;
    }
cout << "Not in the group: " << endl;
for(it=s2.begin(); it!=s2.end();++it){
        if(s1.find(*it)==s1.end()) cout << "- " << *it << endl;
    }