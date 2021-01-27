#include <iostream>
using namespace std;

string s;
void str(){
    cin >> s;
    int n = s.size();
    for(size_t i=0;i<n;i++){
        if(i%2==0){
            s[i]=toupper(s[i]);
        }
    }
    
}


int main(){
    str();
    cout << s;
    return 0;
}