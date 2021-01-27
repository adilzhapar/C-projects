#include <iostream>
#include <map>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    map<pair<string, int>, int> mm;
    map<pair<string, int>, int> :: iterator it;
    int n, x;
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        cin >> s >> x;
        if(mm.empty()){
            mm[make_pair(s, x)]=i;
        }
        for(it = mm.begin(); it != mm.end(); it++){
            if(s==(*it).first.first){
                if(x!=(*it).first.second){
                    mm[make_pair(s, x)]=i;
                }
            }else{
                mm[make_pair(s, x)]=i;
            }
        }
    }
    map<string, int> last;
    map<string, int> :: iterator lit;
    for(it = mm.begin(); it != mm.end(); it++){
        last[(*it).first.first]++;
    }


    for(lit = last.begin(); lit != last.end(); lit++){
        if((*lit).second < 3){
            cout << (*lit).first << " NO BONUS" << endl;
        }else{
            cout << (*lit).first << " +1" << endl;
        }
    }

    return 0;

}