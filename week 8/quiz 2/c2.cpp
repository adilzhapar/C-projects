#include <iostream>
#include <map>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    map<int, int> m;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        m[x]++;
    }
    map<int, int> :: reverse_iterator it = m.rbegin();
    
    int s = (*it).second;

    while((*it).second==s){
        cout << (*it).first << " ";
        it--;
    }
    return 0;
}