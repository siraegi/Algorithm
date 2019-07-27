#include <iostream>
using namespace std;

int main(){
    int H,M;
    cin >> H >> M;
    H %= 30;
    H *= 120;
    int m = M * 10;
    //cout << H<< " "<< m;
    if(H==m) cout << "O";
    else cout << "X";
    return 0;
}