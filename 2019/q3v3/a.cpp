#include <iostream>
#include <set>
#include <cmath>
using namespace std;

double Length(int x, int y, int x1, int y1){
    return sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    set<double> unique;
    int a, b, c, d;
    for(int i=0; i<n; i++){
        cin >> a >> b >> c >> d;
        unique.insert(Length(a, b, c, d));
    }
    cout << unique.size();
    return 0;

}