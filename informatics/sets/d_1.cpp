#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> yes;
    set<int> no;
    // vector<int> last;
    int x;
    string s;
    while(1){
        vector<int> v;

        while(cin.get()!='\n'){
            cin >> x;
            v.push_back(x);
        }
        cin >> s;
        if(s=="YES"){
            for(int i=0; i<v.size(); i++){
                yes.insert(v[i]);
            }
            v.clear();
        }else if(s=="NO"){
            for(int i=0; i<v.size(); i++){
                no.insert(v[i]);
            }
            v.clear();
        }else if(s=="HELP"){
            break;
        }
    }

    set<int> :: iterator it;
    for(it = no.begin(); it != no.end(); it++){
        if(yes.find(*it)!=yes.end()){
            yes.erase(it);
        }
    }
    
    for(it = yes.begin(); it != yes.end(); it++){
        cout << *it << " ";
    }
    return 0;
    
}
