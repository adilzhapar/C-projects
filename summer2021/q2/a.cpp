#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n, cnt=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;

    for(auto i: arr){
        if(i < min){
            min = i;
        }
    }

    for(auto i: arr){
        if(i > max){
            max = i;
        }
    }

    bool test = true;
    
    while(min < max){
        for(auto i: arr){
            if(i == min){
                test = false;
                break;
            }else test = true;
        }
        if(test){
            cnt++;
        }
        min++;
    }

    cout << cnt;
    // printf("%i %i", min, max);
    return 0;
}