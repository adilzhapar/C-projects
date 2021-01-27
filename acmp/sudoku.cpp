#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    vector<vector<int> > v;
    int x;
    vector<int> t;
    while(cin >> x){
        t.push_back(x);
        if(cin.get()=='\n'){
            if(t.size()!=n*n){
                cout << "Incorrect";
                return 0;
            }
            v.push_back(t);
            t.clear();
        }
    }
    set<int> s;
    for(int i=0; i<n*n; i++){
        s.insert(i+1);
    }
    int arr[1000][1000];
    for(int i=0; i<n*n; i++){
        for(int j=0; j<n*n; j++){
            arr[i][j]=v[i][j];
        }
    }
    bool test = false;
    /*for(int i=0; i<n*n; i++){
        for(int j=0; j<n*n; j++){
            if(s.find(arr[i][j])!=s.end()){
                test = true;
            }else{
                cout << "Incorrect";
                return 0;
            }
        }
    }
    for(int i=0; i<n*n; i++){
        for(int j=0; j<n*n; j++){
            if(s.find(arr[j][i])!=s.end()){
                test = true;
            }else{
                cout << "Incorrect";
                return 0;
            }
        }
    } */
    cout << "Correct";
    return 0;
}