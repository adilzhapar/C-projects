// №3754
#include <iostream>
#include <set>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    string s;
    set<string> ss;
    while(cin >> s){
        ss.insert(s);
    }
    cout << ss.size();
    return 0;
}