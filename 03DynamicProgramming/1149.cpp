#include <iostream>
#include <algorithm>
using namespace std;
int d[1000001][3];
int c[1001][3];

int paint(int n){
    for(int i=2;i<=n;i++){
        d[i][0] += min(d[i-1][1], d[i-1][2]) + c[i][0];
        d[i][1] += min(d[i-1][0], d[i-1][2]) + c[i][1];
        d[i][2] += min(d[i-1][0], d[i-1][1]) + c[i][2];
    }
    return min(d[n][0],min(d[n][1],d[n][2]));
}
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> c[i][0] >> c[i][1] >> c[i][2];
    }
    d[1][0]=c[1][0];
    d[1][1]=c[1][1];
    d[1][2]=c[1][2];

    cout << paint(n);
    
    return 0;
}