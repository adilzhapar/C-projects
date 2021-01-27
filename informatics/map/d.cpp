#include <iostream>
#include <map>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    map<string, int> ms;
    string s;
    int best=0;
    while(cin >> s){
        ms[s]++;
    }
    map<string, int> :: iterator it;
    for(it = ms.begin(); it != ms.end(); it++){
        if((*it).second>best){
            best = (*it).second;
            s = (*it).first;
        }
    }
    cout << s;
}