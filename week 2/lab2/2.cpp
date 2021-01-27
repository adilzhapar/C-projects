#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n%2==1){
        cout << "Super" << endl;
    }else if(n%2==0 and n>=2 and n<5){
        cout << "Not Super" << endl;
    }else if(n%2==0 and n>=2 and n<=20){
        cout << "Super" << endl;
    }else if(n%2==0 and n>20){
        cout << "Not Super" << endl;
    }

    return 0;
}