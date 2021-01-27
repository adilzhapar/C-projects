#include <iostream>
using namespace std;

string s;
int cnt=0;
int sum(){
    cin >> s;
    int n = s.size();
    for(size_t i=0;i<n;i++){
        cnt += int(s[i])-48;
    }
    return cnt;
}


int main(){
    sum();
    cout << cnt;
    return 0;
}