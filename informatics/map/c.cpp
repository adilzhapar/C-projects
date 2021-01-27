#include <iostream>
#include <map>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    string s;
    int x;
    map<string, int> ms;
    while(cin >> s >> x){
        ms[s]+=x;
    }
    map<string, int> :: iterator it;
    for(it = ms.begin(); it != ms.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}