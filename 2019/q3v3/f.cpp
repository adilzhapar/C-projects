#include <iostream>
#include <deque>

using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    deque<int> deq;
    char c;
    int x;
    while(1){
        cin >> c;
        if(c=='!'){
            break;
        }
        else if(c=='+'){
            cin >> x;
            deq.push_front(x);
        }
        else if(c=='-'){
            cin >> x;
            deq.push_back(x);
        }
        else if(c=='*'){
            cout << deq.front()+deq.back() << endl;
            deq.pop_back();
            if(deq.empty()){
                cout << "error";
                break;
            }
            deq.pop_front();
            
        }
        if(deq.empty()){
            cout << "error";
            break;
        }
    }
    return 0;
}