#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int sumArr(vector<int> &v, int size)
{
    for(int i=0; i<v.size(); i++){
        size += v.at(i);
    }
    return size;
}

int main()
{
    int n, m;
    cin >> n >> m;
    
    vector<vector<int> > v;
    vector<int> t;
    int x;
    int l;
    int min = 1000;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> x;
            t.push_back(x);
        }
        v.push_back(t);
        t.clear();
    }
    
    for(int i=0; i<n; i++){
        int size = sumArr(v.at(i), 0);
        if(size < min){
            min = size;
            l = i;
        }
    }


    for(int i=0; i<n; i++){
        if(i == l){
            sort(v.at(i).begin(), v.at(i).end());
        }
        for(int j=0; j<m; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}