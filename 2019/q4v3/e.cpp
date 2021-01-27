#include <iostream>
#include <map>
using namespace std;

void Read(map<int, int> &mm, int n){
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        mm[x]++; 
    }
}

void Max(map<int, int> &mm){
    map<int, int> :: reverse_iterator it=mm.rbegin();
    cout << (*it).first;
}

int main(){
    int n;
    cin >> n;
    map<int, int> mm;
    Read(mm, n);
    Max(mm);
    return 0;
}