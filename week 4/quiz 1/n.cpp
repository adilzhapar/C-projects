#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    bool crash = false;
    for(int i=0; i<n; i++){
        if(a[i]>=437){
            cout << "Crash " << i+1;
        }else{
            crash = false;
        }
        
    }
    if(crash = false){
        cout << "No crash";
    }
    
    return 0;
}