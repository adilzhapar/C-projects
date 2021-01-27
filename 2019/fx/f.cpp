#include <iostream>
#include <algorithm>

using namespace std;

bool Gmail(string s){
    size_t pos = s.find("@");
    size_t dot = s.find(".");
    if(dot > pos && s.substr(dot).size()>1){
        return true;
    }else{
        return false;
    }
}

int main(){
    string s;
    cin >> s;
    if(Gmail(s)){
        cout << "Yes";
    }else{
        cout << "No";
    }
}