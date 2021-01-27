#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool StrPolin(vector<char> v){
    bool test = false;
    for(int i=0; i<v.size(); i++){
        if(v[i]==v[v.size()-1-i]){
            test = true;
        }else{
            return false;
        }
    }
    return test;
}

int main(){
    string s;
    cin >> s;
    vector<char> v;
    for(size_t i=0;i<s.size(); i++){
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());

    while(next_permutation(v.begin(), v.end())){
        if(StrPolin(v)==true){
            cout << "ZA WARUDO TOKI WO TOMARE" << endl;
            return 0;
        }
    }
    cout << "JOJO";
    return 0;
}