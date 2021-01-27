#include <iostream>

using namespace std;

int main(){
    int size, count = 0;
    cin >> size;
    int n[size];
    for(int i=0;i<size;i++){
        cin >> n[i];
    }
    for(int i=0;i<size;i++){
        if(n[i]>0){
            count ++;
        }else continue;
    }cout << count << endl;
    return 0;
}