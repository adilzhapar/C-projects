#include <iostream>
using namespace std;

int reverse(int x){
    bool isminus = false;
    if(x < 0){
        isminus = true;
        x *= (-1);
    }
    string s = to_string(x);
    string t = "";
    for(int i=s.size()-1; i >= 0; i--){
        t += s[i];
    }
    
    if(isminus){
        return stoll(t)*(-1);
    }else return stoll(t);
}

int main(){
    long long int x;
    cin >> x;
    
    cout << reverse(x);
}