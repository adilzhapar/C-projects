#include <iostream>

using namespace std;

int main(){
    int N, x=1;
    cin >> N;
    while(x*x<=N){
        cout << x*x << endl;
        x+=1;
    }
    return 0; 
}