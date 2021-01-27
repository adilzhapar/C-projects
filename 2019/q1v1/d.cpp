#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s = {0, 4, 6, 8 , 9};

    int n, x, sum=0;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> x;
        if(s.find(x)!=s.end()){
            sum += x;
        }
    }
    cout << sum;
}