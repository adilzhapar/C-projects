#include <iostream>
#include <vector>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    vector<pair<int, int> > v;
    int x, y;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    int max = 0;
    int pos=-1;
    for(int i=0; i<v.size(); i++){
        if(v[i].second == 1){
            if(v[i].first > max){
                max = v[i].first;
                pos = i;
            }
        }
    }
    if(pos==-1){
        cout << -1;
    }else{
        cout << pos+1;
    }
    return 0;

}