#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> m;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        m[x]++;
    }
    map<int, int> :: iterator it = m.begin();
    it++;
    cout << (*it).second << endl;
    return 0;

}
