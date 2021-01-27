#include <iostream>
using namespace std;

bool ForDegree(int n){
    if(n>0){
        while(n%2==0){
            n=n/2;
        }
        if(n==1) return true;
        else if(n==0 || n!=1) return false;
    }
}

bool RecDegree(int n){
    if(n==1) return true;
    if(n%2==0){
        return RecDegree(n/2);
    }else return false;
}

int main(){
    int n;
    cin >> n;
    if(RecDegree(n)==true){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}