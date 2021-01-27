#include <iostream>
using namespace std;

int i;

int Divider(int a, int b, int i){
    if(i==1) return i;
    if(a%i==0 && b%i==0){
        return i;
        exit(0);
    }
    return Divider(a, b, i-1);
}

int main(){
    int a, b;
    cin >> a >> b;
    if(a<b) i=a;
    else if(b<a) i=b;
    else i = a;
    cout << Divider(a, b, i);


}