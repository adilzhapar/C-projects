#include <iostream>
#include <vector>
#include <set>
using namespace std;


void Print(vector<pair<string, vector<string> > > v){
    for(int i=0; i<v.size(); i++){
        cout << v[i].first << ": ";
        /* for(int j=0; j<v[i].second.size(); j++){
            cout << v[i].second.at(j) << " ";
        } */
        cout << endl;
    }
}


int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    vector<pair<string, vector<string> > > v;
    set<string> s;
    set<string> :: iterator it;
    vector<string> t;
    string name, place;
    for(int i=0; i<n; i++){
        cin >> name;
        while(1){
            if(cin.get()=='\n') break;
            cin >> place;
            s.insert(place);
            t.push_back(place);
        }
        v.push_back(make_pair(name, t));
        t.clear();
    }

    /* for(it = s.begin(); it != s.end(); it++){
        cout << *it << ": ";
        vector<string> last;
        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v[i].second.size(); j++){
                if(*it==v[i].second[j]){
                    last.push_back(v[i].first);
                }
            }
        }
        if(last.size()>1){
            for(int i=0; i<last.size(); i++){
                if(i==last.size()-1){
                    cout << last[i] << endl;
                }
                cout << last[i] << ", ";
            }
        }else{
            cout << last[0] << endl;
        }
    } */

    // Print(v);
    for(it = s.begin(); it != s.end(); it++){
        cout << *it << endl;
    }
    return 0;
}