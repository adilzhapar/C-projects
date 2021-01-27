#include <iostream>
#include <sstream>
using namespace std;
string s;
stringstream ss;
int main(){
    freopen("ss.txt", "r", stdin);
    while(cin >> s){
        ss << s << " ";
    }
    
    string t = ss.str();
    cout << t;
    
    return 0;
}