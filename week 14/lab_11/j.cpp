#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int n, m;


double Distance(int a, int b){
    return sqrt((a-n)*(a-n)+(b-m)*(b-m));
}


bool Sorting(pair<int, int> a, pair<int, int> b){
    return Distance(a.first, a.second) < Distance(b.first, b.second);
}


int main(){
    // freopen("input.txt", "r", stdin);
    cin >> n >> m;
    vector<pair<int, int> > v;
    int z;
    cin >> z;
    int a, b;
    for(int i=0; i<z; i++){
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end(), Sorting);

    for(int i=0; i<v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;

}