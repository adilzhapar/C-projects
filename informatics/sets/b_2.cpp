// №3753
#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    set<int> f;
    set<int> s;
    set<int> last;

    int x;
    for(int i = 0; i<n; i++){
        cin >> x;
        f.insert(x);
    }
    for(int i=0; i<m; i++){
        cin >> x;
        s.insert(x);
    }
    set<int> :: iterator it;
    for(it = f.begin(); it != f.end(); it++){
        if(s.find(*it)!=s.end()){
            last.insert(*it);
        }
    }

    cout << last.size() << endl;
    for(it = last.begin(); it != last.end(); it++){
        cout << *it << " ";
    }

    cout << endl << f.size()-last.size() << endl;
    for(it = f.begin(); it != f.end(); it++){
        if(last.find(*it)==last.end()){
            cout << *it << " ";
        }
    }

    cout << endl << s.size()-last.size() << endl;
    for(it = s.begin(); it != s.end(); it++){
        if(last.find(*it)==last.end()){
            cout << *it << " ";
        }
    }
    return 0;

}