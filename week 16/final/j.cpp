// understandable, have a nice day(rotation)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    string f, s;
    cin >> f >> s;
    /* vector<char> v1;
    vector<char> v2; */
    if(f.size()!=s.size()){
        cout << "Understandable have a nice day";
        return 0;
    }
    if(f==s){
        cout << 0;
        return 0;
    }
    int cnt=0;
    for(int i=0; i<s.size()-1; i++){
        rotate(s.begin(), s.begin()+1, s.end());
        cnt++;
        if(f==s){
            cout << cnt;
            return 0;
        }
    }
    cout << "Understandable have a nice day";
    return 0;

}