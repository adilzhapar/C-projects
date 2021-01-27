#include <iostream>

using namespace std;

int main(){
    int n, count = 0, x;
    cin >> n;
    for(int i = 0;i < n;i += 1){
        cin >> x;
        if(x%10==7){
            count += 1;
        }else{
            continue;
        }
    }
    cout << count << endl;
    return 0;
}