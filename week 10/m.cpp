#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    // freopen("input.txt", "r", stdin);
    int n;
    queue<string> q;
    vector<string> v;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        string s;
        cin >> x;
        if(x==1){
            cin >> s;
            q.push(s);
            v.push_back(q.front());
        }else{
            q.pop();
            if(q.empty()){
                v.push_back("queue is empty");
            }else{
                v.push_back(q.front());
            }

        }
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    
    return 0;
}
