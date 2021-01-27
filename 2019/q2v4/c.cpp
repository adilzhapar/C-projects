#include <iostream>
using namespace std;

void ToScore(int x){
    if(x>=95 && x<=100) cout << "A";
    else if(x>=90 && x<=94) cout << "A-";
    else if(x>=85 && x<=89) cout << "B+";
    else if(x>=80 && x<=84) cout << "B";
    else if(x>=75 && x<=79) cout << "B-";
    else if(x>=70 && x<=74) cout << "C+";
    else if(x>=65 && x<=69) cout << "C";
    else if(x>=60 && x<=64) cout << "C-";
    else if(x>=55 && x<=59) cout << "D+";
    else if(x>=50 && x<=54) cout << "D-";
    else cout << "F";
}

int main(){
    int n;
    cin >> n;
    ToScore(n);
    return 0;

}