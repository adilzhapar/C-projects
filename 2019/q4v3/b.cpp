#include <iostream>
using namespace std;

void NewChar(char c){
    cout << char(int(c)+14);
}

int main(){
    char c;
    cin >> c;
    NewChar(c);
    return 0;
}