#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    int a[26], b[26];
    

    for(int i=0;i<26;i++){
        a[i]=0;
    }
    for(int i=0;i<26;i++){
        b[i]=0;
    }

    if(s.size()==t.size()){
        for(size_t i=0;i<s.size();i++){
            a[int(s[i])-97]++;
            b[int(t[i])-97]++;
        }
    }else{
        cout << "NO";
        return 0;
    }


    for(int i=0;i<26;i++){
        if (a[i]!=b[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}