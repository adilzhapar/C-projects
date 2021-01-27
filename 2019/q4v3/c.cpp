#include <iostream>
#include <vector>

using namespace std;

char arr[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int ToHex(int n, vector<char> &v){
    if(n==0) return n;
    v.push_back(arr[n%16]);
    ToHex(n/16, v);
}


int main(){
    int n;
    cin >> n;
    vector<char> v;
    ToHex(n, v);
    for(int i=v.size()-1; i>=0; i--){
        cout << v[i];
    }
    return 0;
}