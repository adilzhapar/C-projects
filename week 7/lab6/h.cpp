#include <iostream>
using namespace std;

string s;

void test(){
    cin >> s;
    int n= s.size();
    for(size_t i=0;i<n;i++){
        if(int(s[i]) % 2 != 0){
            cout << "Not valid";
            exit(0);
        }
    }
    cout << "Valid";
}

int main(){
    test();
    return 0;
}