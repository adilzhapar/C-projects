#include <iostream>
#include <vector>
using namespace std;

bool IsPrime(int x){
    if(x==0 || x==1){
        return false;
    }else if(x==2 || x == 3){
        return true;
    }
    bool test = true;
    for(int i=2; i*i<=x; i++){
        if(x%i==0){
            test = false;
            break;
        }else{
            test = true;
        }
        
    }
    return test;
}

int SuperPrimes(vector<int> &v){
    for(int j=2; j<1000; j++){
        if(IsPrime(j)==true){
            v.push_back(j);
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    vector<int> res;
    SuperPrimes(v);


    for(int i=2; i<v.size(); i++){
        if(IsPrime(i)==true){
            res.push_back(v[i-1]);
        }
    }

    cout << res[n-1];
    return 0;
}