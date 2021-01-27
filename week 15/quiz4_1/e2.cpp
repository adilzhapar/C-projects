#include <iostream>
using namespace std;

int main(){
    int year;
    cin >> year;
    int x, y, z, t;
    year += 1;
    for(year; year<10000; year++){
        x=year/1000;
        y=year/100%10;
        z=year/10%10;
        t=year%10;
        if(x!=y and x!=z and x!=t and y!=z and y!=t and z!=t){
            break;
        }
    }
    cout << year;
    return 0;
    
}