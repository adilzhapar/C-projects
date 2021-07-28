#include <iostream>
#include <map>

using namespace std;

int main(){
    string s;
    cin >> s;
    map<int, int> m;

    for(auto i: s){
        m[i-'0']++;
    }
    for(auto i: m){
        printf("%i: %i\n", i.first, i.second);
    }
    return 0;
}