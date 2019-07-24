#include <iostream>
#include<string.h>
using namespace std;
int w[2001];
int dp[2001][2001];
int n, m;
void move(int i, int j){
    if(i==j)
        dp[i][j]=1;
    else if(i+1==j)
        dp[i][j] = (w[i]==w[j])? 1:0;
    else{
        if(dp[i][j]!=-1) return;
        if(w[i]==w[j]){
            move(i+1,j-1);
            if(dp[i+1][j-1]==1) dp[i][j]=1;
        }
        else dp[i][j]=0;
    }
}
int main(){    
    memset(dp,-1, sizeof(dp));
    cin.tie(NULL);
    //sync_with_stdio(false);
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> w[i];
    cin >> m;
    
    int a,b;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        move(a,b);
        cout << dp[a][b];
    }
    return 0;
}