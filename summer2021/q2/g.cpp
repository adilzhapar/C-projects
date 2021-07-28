#include <iostream>
#include <map>
using namespace std;

int main(){
    string s, t;
    cin >> s;

    map<char, int> m;
    for(auto i: s){
        if(m.empty()){
            m[i]++;
        }else if(m[i]==0){
            m[i]++;
        }else{
            m[i]++;
            t += i;
        }
    }
    cout << t;
    
    return 0;
}