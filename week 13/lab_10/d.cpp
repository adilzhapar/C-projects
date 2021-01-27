#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int great(vector<int> a, vector<int> b){
    int sum1=0, sum2=0;
    for(int i=0;i<a.size(); i++){
        sum1+=a.at(i);
    }
    for(int i=0;i<b.size(); i++){
        sum2+=b.at(i);
    }
    return sum1 < sum2;
}


int main(){
    int n, m;
    cin >> n;
    vector<vector<int> > v;
    vector<int> t;
    for(int i=0; i<n; i++){
        cin >> m;
        for(int j=0; j<m; j++){
            int x;
            cin >> x;
            t.push_back(x);
        }
        v.push_back(t);
        t.clear();
    }

    sort(v.begin(), v.end(), great);

    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}