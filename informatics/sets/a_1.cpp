#include <bits/stdc++.h>
using namespace std;
int main(){
    char point[6];
    point[0]='.';
    point[1]=',';
    point[2]=';';
    point[3]=':';
    point[4]='!';
    point[5]='?';
    string s;
    getline(cin, s);
    int cnt=0;
    for(size_t i=0;i<s.size();i++){
        for(size_t j=0;j<6;j++){
            if(s[i]==point[j]) cnt++;
        }
    }
    cout << cnt;
    return 0;
}