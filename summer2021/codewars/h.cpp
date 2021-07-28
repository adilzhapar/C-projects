#include <string>
#include <map>
#include <iostream>
using namespace std;
string duplicate_encoder(const string& word){
  string t = "";
  map<char, int> m;
  for(auto i: word){
    m[tolower(i)]++;
  }
  
  for(auto i: word){
    if(m[tolower(i)] > 1) t += ")";
    else t += "(";
  }
//   for(auto i: m) cout << i.first << " " << i.second << endl;
  return t;
}

int main(){
    string s;
    cin >> s;
    cout << duplicate_encoder(s);
}