#include <iostream>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    bool test = false;
    if(x-1000>=0){
        if((x/1000 == x%10) && ((x/100)%10==((x%100)/10))){
            test = true;
        }else test = false;
    }else test = false;

    if(test == true && y==1){
        cout << "YES";
    }else if(test == true && y!=1){
        cout << "NO";
    }else if(test ==  false && y!=1){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
}