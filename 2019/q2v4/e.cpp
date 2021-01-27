#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt[]={0, 0, 0, 0};
    if(s.size()>=8) cnt[0]=1;

    for(size_t i=0; i<s.size(); i++){
        if(isupper(s[i])) cnt[1]=1;
        if(islower(s[i])) cnt[2]=1;
        if(isdigit(s[i])) cnt[3]=1;
    }
    for(int i=0; i<4; i++){
        if(cnt[i]==0){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}