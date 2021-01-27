#include <iostream>
#include <vector>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    string s;
    vector<vector<string> > v;
    vector<string> t;
    for(int i=0; i<n; i++){
        while(1){
            if(cin.get()=='\n') break;
            cin >> s;
            t.push_back(s);
        }
        v.push_back(t);
        t.clear();
    }

    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}