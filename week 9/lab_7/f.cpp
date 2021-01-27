#include <iostream>
using namespace std;

/*void foreven(string s, int cnt){
    for(size_t i=0;i<s.size();i++){
        if((s[i]-'0')%2==0){
            cnt++;
        }
    }
    cout << cnt << endl;
}*/

int cnt=0;
int receven(int i, string s, int cnt){
    if(i>s.size()-1){
        return cnt;
    }else{
        if((s[i]-'0')%2==0){
            return receven(i+1, s, cnt+1);    
        }else{
            return receven(i+1, s, cnt);
        }
    }
}

int main(){
    string s;
    cin >> s;
    
    // foreven(s, cnt);
    cnt = receven(0, s, cnt);
    cout << cnt << endl;
    return 0;
}