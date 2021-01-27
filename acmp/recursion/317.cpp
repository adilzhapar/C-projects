#include <iostream>
using namespace std;

int forSanta(int x, int y, int z, int w, int cnt){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                if(x*i+y*j+z*k==w) cnt++;
            }
        }
    }
    return cnt;
}

int recSanta(int x, int y, int z, int w, int cnt, int i, int j, int k){
    if(i==x || j==y || k==z) return cnt;
    if(x*i+y*j+z*k==w) cnt++;
    return (x, y, z, cnt, i+1, j+1, k+1);
}

int main(){
    int x, y, z, w;
    int cnt=0;
    cin >> x >> y >> z >> w;
    cout << recSanta(x, y, z, w, cnt, 0, 0,);
    return 0;
}