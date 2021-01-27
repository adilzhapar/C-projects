#include <iostream>
using namespace std;

int Almat(int i, string s, int sum){
    if(i>s.size()-1) return sum;
    sum += (s[i]-'0')/2;
    return Almat(i+1, s, sum);
}

int main(){
    string s;
    cin >> s;
    int sum = 0;
    sum = Almat(0, s, sum);
    cout << sum;
    return 0;
}