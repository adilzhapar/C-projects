#include <iostream>
#include <set>
using namespace std;
int main(){
    multiset<int> ms;
    multiset<int> :: iterator it;
    int n;
    cin >> n;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        ms.insert(x);
    }
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> x;
        ms.insert(x);
    }

    for(it = ms.begin(); it != ms.end(); it++){
        cout << *it << " ";
    }
    return 0;

}