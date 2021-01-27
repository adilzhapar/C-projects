#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // freopen("input.txt", "r", stdin);
    int n, m;
    cin >> n >> m;
    vector<int> v1;
    vector<int> v2;
    int x;

    for(int i=0;i<n; i++){
        cin >> x;
        v1.push_back(x);   
    }
    for(int i=0;i<m; i++){
        cin >> x;
        v2.push_back(x);   
    }
    vector<int> :: iterator it1;
    vector<int> :: iterator it2;
    it1 = unique(v1.begin(), v1.end());
    it2 = unique(v2.begin(), v2.end());
    v1.resize(distance(v1.begin(), it1));
    v2.resize(distance(v2.begin(), it2));

    
    int size = v1.size()+v2.size();
    vector<int> v3(size);

    for(int i=0; i<size; i+=2){
        v3[i]=v1[0];
        v1.erase(v1.begin());
    }
    for(int i=1; i<size; i+=2){
        v3[i]=v2[0];
        v2.erase(v2.begin());
        
    } 
    vector<int> :: iterator it3;
    it3 = unique(v3.begin(), v3.end());
    v3.resize(distance(v3.begin(), it3));

    for(int i=0;i<v3.size(); i++){
        cout << v3[i] << " ";
    }
    return 0;
}
