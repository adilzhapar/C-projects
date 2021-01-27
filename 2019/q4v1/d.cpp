#include <iostream>
#include <map>
using namespace std;


int main(){
    int n;
    cin >> n;
    map<string, int> mm;
    map<string, int> :: iterator it;
    string s;
    int x;
    for(int i=0; i<n; i++){
        cin >> s >> x;
        mm[s]+=x;
    }
    for(it = mm.begin(); it != mm.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;

}