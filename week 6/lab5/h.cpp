#include <iostream>
using namespace std;
int main(){
    string s;
    int n[10];
    for(int i=0;i<10;i++){
        n[i]=0;
    }
    cin >> s;
    for(size_t i=0;i<s.size();i++){
        n[int(s[i])-48]++;
    }
    int best =0;
    for(int i=0;i<10;i++){
        if(n[i]!=0){
            best = n[i];
        }
    }
    for(int i=0;i<10;i++){
        if(n[i]==0 or n[i]==best){
            continue;
        }else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}