#include <iostream>
using namespace std;

bool HorseAndBull(int x, int y, int n){
    if(n<0) return false;
    if(n==0) return true;
    return (HorseAndBull(x, y, n-31) || HorseAndBull(x, y, n-27))
}


int main(){
    int x, y;
    int n=1770;
}