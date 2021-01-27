#include <bits/stdc++.h>
using namespace std;

bool isdigit(string c){
    if(isdigit(c[0])){
        return true;
    }else return false;
}


int main(){
    string c;
    cin >> c;
    if(isdigit(c)==true){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}