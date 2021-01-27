#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    vector<pair<string, string> > v;
    for(int i=0;i<n;i++){
        string f, s;
        cin >> f >> s;
        v.push_back(make_pair(f, s));
    }
    int m;
    cin >> m;
    bool test = true;
    vector<string> ans;

    for(int i=0;i<m;i++){
        string log, pass;
        cin >> log >> pass;
        for(int i=0;i<v.size(); i++) {
            if (log != v[i].first) {
                test = false;
            } else {
                if (pass != v[i].second) {
                    ans.push_back("password error");
                    test = true;
                    break;
                }else{
                    ans.push_back("correct password");
                    break;
                }
            }

        }
        if(test==false){
            ans.push_back("login error");
            test = true;
        }

    }

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
    return 0;
}
