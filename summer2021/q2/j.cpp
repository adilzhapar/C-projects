#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    string s;
    int n, m;
    cin >> s >> n >> m;
    char arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j] = char(88);
        }
    }
    int x=0, y=0;
    arr[x][y] = char(42);
    for(size_t i=0; i<s.size(); i++){
        if(s[i] == char(68)){
            x++;
            arr[x][y] = char(42);
        }
        if(s[i] == char(85)){
            x--;
            arr[x][y] = char(42);
        }
        if(s[i] == char(76)){
            y--;
            arr[x][y] = char(42);
        }
        if(s[i] == char(82)){
            y++;
            arr[x][y] = char(42);
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}