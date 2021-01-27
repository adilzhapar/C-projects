#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

bool IsSquare(char a, char c){
    if(a=='0') return false;
    int n = (a-'0')*10+(c-'0');
    if(sqrt(n)==int(sqrt(n))){
        return true;
    }else return false;
}

int main(){
    string s;
    cin >> s;
    stack<char> my_stack;
    for(size_t i=0; i<s.size(); i++){
        if(!my_stack.empty()){
            if(IsSquare(my_stack.top(), s[i])){
                my_stack.pop();
            }else{
                my_stack.push(s[i]);
            }
        }else{
            my_stack.push(s[i]);
        }
    }
    if(my_stack.empty()){
        cout << "Stack is empty" << endl;
        return 0;
    }
    while(!my_stack.empty()){
        cout << my_stack.top();
        my_stack.pop();
    }
    return 0;
}