#include <iostream>
#include <sstream>
using namespace std;
int main(){
    string s;
    cin >> s;
    stringstream ss;
    ss << s;
    string name;
    ss >> name;
    cout << "Welcome " << name;
    return 0;
}