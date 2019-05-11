#include <iostream>
#include <algorithm>
using namespace std;
long long d[100][100];
long long pinary(int n){
    for(int i=2;i<=n;i++){
        d[i][0]=0; d[i][1]=0;
        if(d[i-1][0]>0){
            d[i][0]+=d[i-1][0];
            d[i][1]+=d[i-1][0];
        }
        if(d[i-1][1]>0){
            d[i][0]+=d[i-1][1];
        }
    }
    return d[n][0]+d[n][1];
}
int main(){
    int n;
    d[0][0]=0;
    d[0][1]=0;
    d[1][0]=0;
    d[1][1]=1;
    cin >> n;
    cout << pinary(n);
    return 0;
}