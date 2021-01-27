#include <iostream>
using namespace std;

string s;
int sum=0;
int luck(){
    cin >> s;
    for(size_t i=0;i<s.size();i++){
        sum += int(s[i])-48;
    }
    return sum;
}

void test(){
    if(sum % (int(s[s.size()-1])-48)==0){
        cout << "Yes";
    }else{
        cout << "No";
    }
}




int main(){
    luck();
    test();
    return 0;
}
