#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b;
    cin >> c >> d;
    cin >> e >> f;
    if((a+c+e)>(b+d+f)){
        cout << "Grats Yelnur";
    }
    else if((a+c+e)<(b+d+f)){
        cout << "Hee Hee Losers";
    }else{
        cout << "Draw";
    }
    return 0;
}