#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    int x;
    map<int, int> m;

    for(int i=0; i<9; i++){
        m[i+1]=0;
    }

    while(1){
        cin >> x;
        if(x==0){
            break;
        }else{
            m[x]++;
        }
    }
    map<int, int> :: iterator it;

    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).second << " ";
    }
    return 0;
}