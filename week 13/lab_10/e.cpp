#include <iostream>
#include <map>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    map<string, long double> mm;
    int sum = 0;
    for(int i=0; i<n; i++){
        int m; 
        cin >> m;
        for(int j=0; j<m; j++){
            string s;
            int x;
            cin >> s >> x;
            mm[s]+=x;
            sum+=x;
        }
    }
    map<string, long double> :: iterator it;
    for(it = mm.begin(); it != mm.end(); it++){
        (*it).second = (*it).second*100/sum;
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}