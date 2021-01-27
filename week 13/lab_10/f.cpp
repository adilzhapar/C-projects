// GPA
#include <iostream>
#include <vector>
using namespace std;

double ToScore(double x){
    if(x>=95 && x<=100) x=4.00;
    else if(x>=90 && x<=94) x = (double)11/(double)3;
    else if(x>=85 && x<=89) x = (double)10/(double)3;
    else if(x>=80 && x<=84) x = 3.00;
    else if(x>=75 && x<=79) x = (double)8/(double)3;
    else if(x>=70 && x<=74) x = (double)7/(double)3;
    else if(x>=65 && x<=69) x = 2.00;
    else if(x>=60 && x<=64) x = (double)5/(double)3;
    else if(x>=55 && x<=59) x = (double)4/(double)3;
    else if(x>=50 && x<=54) x = 1.00;
    return x;
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int at1, at2, final, credit;
    int allcredits=0;
    double results[n];
    for(int i=0; i<n; i++){
        cin >> at1 >> at2 >> final >> credit;
        allcredits+=credit;
        if(at1+at2<30 || final < 20){
            results[i]=0;
        }else{
            results[i]=ToScore(at1+at2+final)*credit;
        }
    }
    double sum=0;
    for(int i=0;i<n; i++){
        sum+=results[i];
    }
    cout << sum/(double)allcredits;

    return 0;
}