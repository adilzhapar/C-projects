#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > v;
    int x, y;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        if(x<=y){
            v.push_back(make_pair(x, y));
        }else{
            v.push_back(make_pair(y, x));
        }
    }
    vector<int> cnt(n);
    int sum=0;
    
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<i; j++){
            if(v[i]==v[j]){
                sum++;
                cnt[i]=sum;
            }
        }
        sum=0;
    }
    for(int i=0; i<cnt.size(); i++){
        cout << cnt[i] << endl;
    }
    
    return 0;
}