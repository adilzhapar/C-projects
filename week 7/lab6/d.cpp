#include <iostream>
using namespace std;

int n;
int id[100000];
int x;

void read(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> id[i];
    }
}

int res(){
    cin >> x;
    for(int i=0;i<n;i++){
        if(id[i]==x){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}


int main(){
    read();
    res();
    return 0;
}