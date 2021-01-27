#include <iostream>
#include <vector>

using namespace std;
int main(){
    string days[]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int nums[]={7, 6, 5, 4, 3, 2, 1};
    vector< pair<string, int> > v(7);

    for(int i=0; i<7; i++){
        v.push_back(make_pair(days[i], nums[i]));
    }
    string s;
    cin >> s;
    vector< pair<string, int> > :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        if(s==(*it).first){
            cout << (*it).second;
            break;
        }
    }
    return 0;
}