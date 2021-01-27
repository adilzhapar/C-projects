#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n<1440){
        printf("%i %i\n", n / 60, n % 60);
    }else{
        printf("%i %i\n", (n / 60) - 24, n % 60);
    }
    return 0;
}