#include <iostream>
using namespace std;

bool search(int *a ,int i, int n, int x){
    if(a[i]==x) return true;
    if(i>n-1) return false;
    return search(a, i+1, n, x);
}

int main(){
    // freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int x;
    cin >> x;

    if(search(a, 0, n, x)==true){
        cout << "Yes";
    }else cout << "No";

    return 0;
}