#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    map<int, int> mm;
    map<int, int> :: iterator it;

    vector<vector<int> > v;

    int x;
    vector<int> t;
    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> x;
            t.push_back(x);
        }
        v.push_back(t);
        t.clear();
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j] > 0){
                cnt++;
            }
        }
        mm[i+1] = cnt;
        cnt=0;
    }
    int pos = -1;

    /* if(n!=mm.size()){
        cout << "Numbers are equal";
    }else{
        int max = 0;
        for(it = mm.begin(); it != mm.end(); it++){
            if((*it).second > max){
                max = (*it).second;
                pos = (*it).first; 
            }
        }
        cout << pos+1;
    } */
    
}