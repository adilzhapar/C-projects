// Disemvowel Trolls
#include <iostream>

using namespace std;

int main(){
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    bool test = true;
    string s;
    cin >> s;
    string t = "";
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<5; j++){
            if(s[i]==vowels[j]){
                test = false;
                break;
            }
        }
        if(test){
            t += s[i];
        }else test = true;
    }
    cout << t;
}