#include <iostream>
using namespace std;
int g[101][101];
long dp[101][101];
int n;
/*
void move(int i, int j, int k){
    if(i==n-1 && j==n-1){
        if(g[i][j]==0) dp[i][j]++;
        else return;
        
    }
    else if(i>n-1 || j>n-1) return;
    else{
        dp[i][j]=1;
        move(i+g[i][j],j);
        move(i,j+g[i][j]);
        return;
    }
}
*/

int main(){
    cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> g[i][j];
    
    //move(0,0);
    //cout << dp[n-1][n-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
        }
    }
}