#include <iostream>
#include <algorithm>
using namespace std;
int c[101];
int dp[10001];
int n, k;
int main(){
    for(int i=0;i<10001;i++)
        dp[i]=100000;
    //memset(dp,100000, sizeof(int)*10000);
    cin >> n >> k;
    for(int i=0;i<n;i++)
        cin >> c[i];
    sort(c,c+n);
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=k;j++){
            if(j-c[i]>=0){
                if(j%c[i]==0) dp[j]=j/c[i];
                dp[j] = min(dp[j],dp[j-c[i]]+1);
            }       
        }
    }
    if(dp[k]!=100000) cout << dp[k];
    else cout << -1;
}