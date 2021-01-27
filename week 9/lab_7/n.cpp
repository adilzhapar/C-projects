#include <bits/stdc++.h>
using namespace std;

/*int ForCheat(int *a, int n, int k, bool test){
    for(int i=0;i<n;i++){
        if(a[i]+k<a[i+1]){
            test = true;
        }else{
            test = false;
            return 0;
            
        }
    }
}*/


int RecCheat(int *a, int n, int k, int i, bool test){
    if(i>n-1) return test;
    if(a[i]+k<=a[i+1]){
        test = true;
        return RecCheat(a, n, k, i+1, test);
    }else{
        test = false;
        return 0;
    }
}

int main(){
    int n, k;
    bool test = false;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    bool answer = RecCheat(a, n, k, 0, test);
    if(answer == true){
        cout << "no";
    }else cout << "cheater";

    return 0;
}