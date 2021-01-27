#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> s;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        if(s.find(x)==s.end()){
            s.insert(x);
        }else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}