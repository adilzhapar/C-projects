#include <iostream>
#include <vector>
using namespace std;

string likes(vector<string> names){
    if(names.empty()) return "no one likes this";
    if(names.size()==1) return names[0] + " likes this";
    if(names.size()==2) return names[0] + " and " + names[1] + " like this";
    if(names.size()==3) return names[0] + ", " + names[1] + " and " + names[2] + " like this";
    return names[0] + ", " + names[1] + " and " + to_string(names.size()-2) + " others like this";
}

int main(){
    // vector<string> v = {"John", "Adil", "Jack", "Ermek", "Jansaya"};
    cout << likes({"John", "Adil", "Jack", "Ermek", "Jansaya"});
    return 0;
}