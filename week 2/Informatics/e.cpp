//https://informatics.mccme.ru/mod/statements/view.php?id=2296&chapterid=2940#1

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int v,t,c;
    cin >> v >> t;
    if(v>0 and v*t < 109){
        c = v*t;
    }
    else if(v > 0 and v*t>109){
        c = v*t - 109;
    }
    else if(v<0 and abs(v*t)<109){
        c = 109 + v*t;
    }
    else{
        c = 109 - (abs(v*t)-109);
    }
    cout << c << endl;

    return 0;
}