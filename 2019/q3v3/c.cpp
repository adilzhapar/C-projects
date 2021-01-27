#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<int> q;
    for(size_t i=0;i<s.size(); i++){
        if(q.empty()){
            q.push(s[i]-'0');
        }else if(s[i]=='1' && q.top()==1){
            q.pop();
            q.push(0);
        }else if(s[i]=='1' && q.top()==0){
            q.push(1);
        }else{
            q.push(s[i]-'0');
        }

    }
    vector<int> v;
    while(!q.empty()){
        v.push_back(q.top());
        q.pop();
    }
    for(int i=v.size()-1; i>=0; i--){
        cout << v[i];
    }

    return 0;
}