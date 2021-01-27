#include <iostream>
using namespace std;
int main(){
    int cap=0, sm=0;
    string s;
    cin >> s;
    for(size_t i=0; i<s.size();i++){
        if(int(s[i])>= 65 and int(s[i])<=90){
            cap ++;
        }else{
            sm++;
        }
    }
    cout << sm << " " << cap;



    return 0;
}