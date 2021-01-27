#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int q;
    cin >> q;
    vector<int> ans;
    for(int i=0; i<q; i++){
        int x, cnt=0;
        cin >> x;
        for(int j = 0; j<n; j++){
            if(x==arr[i]){
                cnt++;
            }
        }
        ans.push_back(cnt);
    }
    
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
}