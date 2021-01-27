#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    int a[10000];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    int pos=0;
    for(int i=0;i<n;i++){
        if(a[i]==m){
            pos = i+2;
            break;
        }
        else if(a[i]>m && m>a[i+1]){
            pos = i+2;
            break;
        }else if(m>a[i]){
            pos = 1;
            break;
        }
    }
    cout << pos;
    
    
    return 0;
}