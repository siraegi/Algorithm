#include <iostream>
using namespace std;
int main(){
    long long N, M;
    scanf("%d %d",&N,&M);
    long long a;
    long long s[N+1];
    long long cnt[M+1]={0};
    
    s[0]=0;
    for(int i=1;i<=N;i++){
        scanf("%d",&a);
        s[i]=s[i-1]+a;
        cnt[s[i]%M]++;
    }
    long long sum=cnt[0];  
    for(int i=0;i<M;i++){
        sum += (cnt[i]*(cnt[i]-1))/2;
    }
    cout << sum;
    return 0;
}