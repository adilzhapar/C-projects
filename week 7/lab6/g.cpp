#include <iostream>
#include <sstream>
using namespace std;

string s;
stringstream ss;

void str(){
    freopen("input.txt", "r", stdin);
    
    while(cin >> s){
        ss << s << " ";
    }
    string text = ss.str();

    for(size_t i=0;i<text.size();i++){
        if(int(text[i])==65 or int(text[i])==69 or int(text[i])==73 or int(text[i])==79 or int(text[i])==85){
            text.erase(i, 1);
            i--;
        }else if(int(text[i])==97 or int(text[i])==101 or int(text[i])==105 or int(text[i])==111 or int(text[i])==117){
            text.erase(i, 1);
            i--;
        }
    }
    if(int(text[0])==32){
        text.erase(0, 1);
    }
    cout << text;
}

int main(){
    str();
    return 0;
}