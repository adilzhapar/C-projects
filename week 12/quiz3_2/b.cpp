#include <bits/stdc++.h>
using namespace std;
int main(){
    char chess[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<9;j++){
            chess[i][j]='0';
        }
    }
    int n;
    cin >> n;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        chess[int(s[0])-65][s[1]-'0'-1]='*';
    }
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cout << chess[i][j];
        }
        cout << endl;
    }
    return 0;
}