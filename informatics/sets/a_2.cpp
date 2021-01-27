#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> frst;
    set<int> scnd;
    set<int> third;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        frst.insert(x);
    }
    int m; 
    cin >> m;
    for( int i=0; i<m; i++){
        cin >> x;
        scnd.insert(x);
    }
    
    set<int> :: iterator fit;
    

    
    for(fit=frst.begin(); fit != frst.end(); fit++){
        if(scnd.find(*fit)==scnd.end()){
            third.insert(*fit);
        }
    }
    for(fit=scnd.begin(); fit != scnd.end(); fit++){
        if(frst.find(*fit)==frst.end()){
            third.insert(*fit);
        }
    }
    
    cout << third.size() << endl;
    for(fit = third.begin(); fit != third.end(); fit++){
        cout << *fit << " ";
    }
    return 0;
}