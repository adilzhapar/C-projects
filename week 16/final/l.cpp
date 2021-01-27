// unique,minimal element
#include <iostream>
#include <set>
#include <vector>
#include <map>
using namespace std;

void Minimum(int n){
    map<int, int> m;
    map<int, int> :: iterator it;
    vector<int> v;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
        m[x]++;
    }
    int min;
    bool test = true;
    for(it = m.begin(); it != m.end(); it++){
        if((*it).second==1){
            test = true;
            min = (*it).first;
            break;
        }else{
            test = false;
        }
    }
    if(test == false){
        cout << "ZA WARUDO" << endl;
    }else{
        for(int i=0; i<=v.size(); i++){
            if(min==v[i]){
                cout << i+1 << endl;
                break;
            }
        }
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        Minimum(m);
    }
    return 0;
}