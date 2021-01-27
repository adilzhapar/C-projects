#include <iostream>
using namespace std;

int funsum(int sum, string s){
    for(size_t i=0;i<s.size();i++){
        sum += (s[i]-'0');
    }
    return sum;
}

int recsum(int i, int sum, string s){
    if(i>s.size()-1) return sum;
    return recsum(i+1, sum += (s[i]-'0'), s);
}


int main(){
    int sum=0;
    string s;
    cin >> s;
    // cout << funsum(sum, s) << endl;
    cout << recsum(0, sum, s) << endl;
    return 0;
}