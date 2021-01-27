#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    int size = s.size()-t.size();
    int len = t.size();
    for(int i=0; i<=size; i++){
        if(s.substr(i, len)==t){
            cout << i << " ";
        }
    }
    return 0;
}