#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<string> my_set;
    set<string> ss;
    string s;
    int t;
    for(int i=0; i<n; i++){
        cin >> s >> t;
        if(my_set.find(s)==my_set.end()){
            my_set.insert(s);
        }else{
            ss.insert(s);
        }
    }
    set<string> :: iterator it;
    if(!ss.empty()){
        for(it = ss.begin(); it != ss.end(); it++){
            cout << *it << endl;
        }
    }else{
        cout << "NO";
    }
    return 0;
}