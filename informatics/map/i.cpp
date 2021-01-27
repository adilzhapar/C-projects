#include <iostream>
#include <map>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    map< pair<string,string> , int > m;
    map< pair<string,string> , int > :: iterator it;
    map< pair<string,string> , int > :: iterator rit;
    string name, tovar, n;
    while(cin >> name >> tovar >> n){
        m[make_pair(name, tovar)] += n;
    }
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first.first << ": " << endl;
        for(rit = m.begin(); rit != m.end(); it++){
            if((*it).first.first==(*rit).first.first){
                cout << (*rit).first.second << " " << (*rit).second << endl;
            }
        }
    }
    return 0;
}