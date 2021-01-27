#include <iostream>
using namespace std;
int main(){
    string s;
    int ev=0,od=0;
    cin >> s;
    
    
    for(size_t i=0;i<s.size();i++){
        if(i%2==0){
            ev++;
        }else{
            od++;
        }
    }

    if(ev==od){
        cout << "YES";
    } 
    else{
        cout << "NO";
    }

    
    return 0;
}