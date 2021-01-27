#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

 using namespace std;
 int main(){
     int n,x;
     int a,b;
     cin>>n;
     vector<int> s;
     for(int i=0;i<n;i++){
         cin>>x;
         s.push_back(x);
     }

     cin>>a>>b;//range
    //8 6 7 5 3
    // 1 3
     reverse(s.begin()+a, s.begin()+b);
      for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
     }
     return 0;
 }