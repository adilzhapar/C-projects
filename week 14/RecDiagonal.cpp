#include <iostream>
#include <cmath>
using namespace std; 

struct Rectangle{
    int x;
    int y;
    Rectangle(){}
    Rectangle(int _x, int _y){
        x=_x;
        y=_y;
    }
    void Diagonal(){
        double c = sqrt(x*x+y*y);
        cout << c;
    }
};

int main(){
    int x, y;
    cin >> x >> y;
    Rectangle rec(x, y);
    rec.Diagonal();
    
    return 0;    
}