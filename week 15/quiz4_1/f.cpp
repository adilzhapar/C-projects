#include <iostream>
#include <vector>
using namespace std;
int main(){
    // freopen("input.txt", "r", stdin);
    vector<string> v;
    string s;

    while(cin >> s){
        v.push_back(s);
    }

    int max = 0;
    string longest;
    for(int i=0; i<v.size(); i++){
        if(v[i].size()>max){
            max = v[i].size();
            longest = v[i];
        }
    }
    cout << longest;
    return 0;

}