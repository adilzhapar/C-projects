//map-similar keys-different values
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<pair<string, int>, int> mym;
    map<pair<string, int>, int> :: iterator it;
    for(int i =0; i<n; i++){
        string f, s;
        int a, b;
        cin >> f >> a >> s >> b;
        string name = f+" and "+s;
        int sum = a+b;
        if(mym.empty()){
            mym[make_pair(name, sum)]=i;
        }
        for(it = mym.begin(); it != mym.end(); it++){
            if(name==(*it).first.first){
                if(sum!=(*it).first.second){
                    mym[make_pair(name, sum)]=i;
                }
            }else{
                mym[make_pair(name, sum)]=i;
            }
        }
    }
    for(it = mym.begin(); it!=mym.end(); it++){
        cout << (*it).first.first << " " << (*it).first.second << endl;
    }
}