#include <iostream>
using namespace std;
int main(){
    int n;
    int max = 98;
    for(int i=0; i<3; i++){
        cin >> n;
        if(n<99 || n>699){
            cout << "ERROR";
            return 0;
        }
        if(n>max){
            max = n;
        }
    }
    cout << max;
    return 0;
}