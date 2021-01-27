#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    float a = s.size();
    float b = t.size();
    
    int cnt=0;
    size_t pos = 0;
    size_t fpos = 0;

    do{
        fpos = t.find(s, pos);
        if( fpos != string::npos){
            pos = fpos + 1;
            cnt++;
        }
    }while(fpos != string::npos);
    
    if(cnt==b/a){
        cout << "YES";
    
    }else{
        cout << "NO";
    }
    
    

    return 0;
}