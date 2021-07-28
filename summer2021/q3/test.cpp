#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char lower(char c){
    return tolower(c);
}

int main(){
    string s = "AdIlZhApAr";
    for_each(s.begin(), s.begin()+s.size(), lower);
    cout << lower(s[0]);
}