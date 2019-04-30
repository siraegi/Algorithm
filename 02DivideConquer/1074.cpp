#include <iostream>
#include <algorithm>
using namespace std;
int N, R, C, cnt=0;
void Z(int size, int r, int c){
    if(size == 2){
        if(r==R && c==C){
            cout << cnt; return;
        }
        cnt++;
        if(r==R && c+1 == C){
            cout << cnt; return;
        }
        cnt++;
        if(r+1==R && c == C){
            cout << cnt; return;
        }
        cnt++;
        if(r+1==R && c+1 == C){
            cout << cnt; return;
        }
        cnt++;
        return;
    }
    size/=2;
    Z(size, r,c);
    Z(size, r,c+size);
    Z(size, r+size,c);
    Z(size, r+size,c+size);
}
int main(){
    cin >> N >> R >> C;
    Z(1<<N,0,0);
    return 0;
}