#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    bool test = false;

    for(int i=0;i<n;i++){
        if(a[i]+k<a[i+1]){
            test = true;
        }else{
            test = false;
            break;
        }
    }
    if(test == true){
        cout << "no";
    }else{
        cout << "cheater";
    }

    return 0;
}