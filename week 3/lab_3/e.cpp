#include <iostream>

using namespace std;

int main(){
    int size, b;
    long long sum=0;
    cin >> size;
    int n[size];
    for(int i=0;i<size; i++){
        cin >> n[i];
        sum += n[i];
    }
    cout << sum << endl;
    return 0;
}