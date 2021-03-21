#include <iostream>
using namespace std;

int main(){
    char a[11][13];
    for(int i=0; i<11; i++){
        for(int j=0; j<13; j++){
            a[i][j] = '*';
        }
    }
    int s = 0;
    for(int i=11; i>=4; i--){
        for(int j=0; j<7-s; j++){
            a[i][j] = ' ';
        }
        s++;
    }
    s = 0;
    for(int i=11; i>=4; i--){
        for(int j=12; j>=6+s; j--){
            a[i][j] = ' ';
        }
        s++;
    }
    a[1][0] = ' ';
    a[1][12] = ' ';
    a[0][6] = ' ';
    for(int i=0; i<2; i++){
        a[0][i] = ' ';
        a[0][12-i] = ' ';
    }
    

    for(int i=0; i<11; i++){
        for(int j=0; j<13; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}