#include <iostream>

using namespace std;

int main(){
    int s, to, x = 1;
    cin >> to;

    for(x; x<= to; x += 1){
        s += x;
    }
    cout << s << endl;

    
    return 0;
}