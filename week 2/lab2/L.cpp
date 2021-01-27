#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    if(N==1){
        cout<<1;
        exit(0);
    }else{
        for(int x=1; x*2 <= N; x = x*2){
        if(x==1 and N!=1){
            cout << 1 << " " << x*2 << " ";
        }else{
            cout << x*2 << " ";
        }
        }
    }
    
    
    return 0;
}