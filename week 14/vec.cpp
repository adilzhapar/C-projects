#include <iostream>
#include <vector>
using namespace std;

struct list{
    string name;
    string surname;
    int age;
    list(){}
    list(string _f, string _s, int _n){
        name = _f;
        surname = _s;
        age = _n;
    }
};

int main(){
    string f;
    string s;
    int x, n;
    cin >> n;

    vector<list> v;

    for(int i=0; i<n; i++){
        cin >> f >> s >> x;
        list one(f, s, x);
        v.push_back(one);
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i].name << " " << v[i].surname << " " << v[i].age << endl;
    }
    return 0;
}