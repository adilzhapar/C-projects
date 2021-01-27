#include <iostream>
using namespace std;

string s;
int cnt=0;
int x;
void res(){
    cin >> s >> x;
    int n = s.size();
    for(size_t i=0;i<n;i++){
        if (isdigit(s[i])){
            cnt++;
            if(cnt>=x){
                cout << "Valid";
                exit(0);
            }
        }else{
            cnt = 0;
        }
    }
    cout << "Not valid";
}


int main(){
    res();
    return 0;
}