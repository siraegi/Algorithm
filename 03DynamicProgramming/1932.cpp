#include <iostream>
#include <algorithm>
using namespace std;
int t[501][501];
int dp[501][501];
int n;
// int path(int r, int c){
//     if(r==n) return t[r][c];
//     else{
//         int ret = max(path(r+1,c), path(r+1,c+1));
//         return ret+t[r][c];
//     }
// }
int path(int r, int c){
    if(r==n) return t[r][c];
    if(dp[r][c]) return dp[r][c];
    int ret = max(path(r+1,c), path(r+1,c+1));
    return dp[r][c]=ret+t[r][c];
    
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++)
            cin >> t[i][j];
    }
    cout << path(1,0);
    return 0;
}