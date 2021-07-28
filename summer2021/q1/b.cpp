#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int arr[6];
    for(int i=0; i<6; i++){
        cin >> arr[i];
    }
    int sum1=0,sum2=0;
    for(int i=0; i<6; i++){
        if(i % 2 == 0){
            sum1 += arr[i];
        }else sum2 += arr[i];
    }
    
    if(sum1 > sum2){
        cout << "WON";
    }else if(sum1 < sum2){
        cout << "Lose";
    }else{
        cout << "draw";
    }

    return 0;
}