#include <bits/stdc++.h>
#include "tax.h"

using namespace std;

extern double last, pre, debt, over;
double elec;
int electr(double x, double y, double debt){
    elec = (x-y)*17.79 + debt;
    // printf("Cost for electricity: %.2f", elec);
    return elec;
}

extern double glast, gpre, gdebt, gover;
double gas;
int fungas(double x, double y, double debt){
    gas = (x-y)*29.44 + debt;
    // printf("Cost for gas: %.2f", gas);
    return gas;
}


int main(){
    string s;
    // freopen("input.txt", "r", stdin);
    /* cout << "Last for electricity: " << endl;
    cin >> last;
    cout << "Previous for electricity: " << endl;
    cin >> pre;*/
    cout << "Difference in elec: " << last - pre << endl;
    /*cout << "Debt for electricity: " << endl;
    cin >> debt;
    cout << "Overpay for elevtricity: " << endl;
    cin >> over;*/
    electr(last, pre, debt); 
    cout << "Include overpay for electricity?(yes or no)" << endl;
    cin >> s;
    if(s=="yes"){
        elec -= over;
    }

    /* cout << "Last for gas: " << endl;
    cin >> glast;
    cout << "Previous for gas: " << endl;
    cin >> gpre;*/
    cout << "Difference in gas: " << glast - gpre << endl;;
    /*cout << "Debt for gas: " << endl;
    cin >> gdebt;
    cout << "Overpay for gas: " << endl;
    cin >> gover;*/
    fungas(glast, gpre, gdebt); 
    cout << "Include overpay for gas?(yes or no)" << endl;
    cin >> s;
    if(s=="yes"){
        gas -= gover;
    }

    extern double water, dwater;
    /* cout << "Water: " << endl;
    cin >> water;
    cout << "Debt for water: " << endl;
    cin >> dwater; */
    
    double trash = 3318.24, vdgo=225, phone=5899;
    double cost = elec+gas+water+dwater+trash+vdgo+phone;
    cout << "The electricity cost: " << elec<< endl;
    cout << "The gas cost: " << gas<< endl;
    printf("The cost is: %.2f", cost);

    return 0;
}
