#include <iostream>

using namespace std;

int main(){
    int n, count=0;
    cin >> n;
    for(int i=0; i < n;  i += 1){
        cin >> int x;
        if(x%100==0){
            count = count + 2;
        }else if(x%10==0 and x%100!=0){
            count = count +1;
        }
        
    }
}