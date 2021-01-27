#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main(){
    map<int, int> m;
    int num, score;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> num >> score;
        m[score] = num;
    }
    map<int, int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).second << " " << (*it).first << endl;
    }
}
