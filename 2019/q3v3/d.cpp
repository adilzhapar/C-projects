#include <set>
#include <iostream>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    string s;
    set<string> my_set;
    set<string> unique;
    while(cin >> s){
        if(!isalpha(s[s.size()-1])){
            s.erase(s.size()-1, 1);
        }
        if(my_set.find(s)==my_set.end()){
            my_set.insert(s);
        }else{
            unique.insert(s);
        }
    }
    set<string> :: iterator it;
    for(it = unique.begin(); it != unique.end(); it++){
        cout << *it << endl;
    }
}