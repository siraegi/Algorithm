#include <iostream>
#include <algorithm>
using namespace std;
int c[101];
int dp[10001];
int n, k;
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++)
        cin >> c[i];
    sort(c,c+n);
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=k;j++){
            if(j-c[i]>=0)
                dp[j]+=dp[j-c[i]];
        }
    }
    
    cout << dp[k];
}