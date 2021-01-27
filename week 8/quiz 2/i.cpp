#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a[4];
    for(int i=0;i<4;i++){
        a[i]=0;
    }
    for(size_t i=0;i<s.length();i++){
        if(int(s[i])==82) a[0]++;
        else if(int(s[i])==76) a[1]++;
        else if(int(s[i])==70) a[2]++;
        else if(int(s[i])==66) a[3]++;
    }
    if(a[3]>a[2]){
        int n = a[3]-a[2];
        while(n>0){
            cout << char(70);
            n--;
        }
    }
    if(a[2]>a[3]){
        int n = a[2]-a[3];
        while(n>0){
            cout << char(66);
            n--;
        }
    }
    if(a[1]>a[0]){
        int n = a[1]-a[0];
        while(n>0){
            cout << char(82);
            n--;
        }
    }
    if(a[0]>a[1]){
        int n = a[0]-a[1];
        while(n>0){
            cout << char(76);
            n--;
        }
    }

    return 0;
}