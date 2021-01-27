#include <iostream>
using namespace std;
int main(){
    int n, a, b;
    string s;
    cin >> n >> a >> b;
    cin >> s;
    int toupper=0, tolower=0;
    for(size_t i=0; i<s.size(); i++){
        if(s[i]>=65 && s[i]<=90){
            tolower+=a;
        }else{
            toupper+=b;
        }
    }
    if(tolower<=toupper){
        cout << tolower;
    }else{
        cout << toupper;
    }
    return 0;
}