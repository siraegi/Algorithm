#include <iostream>
using namespace std;
int main(){
    int N, M;
    scanf("%d %d",&N,&M);
    int a[N+1];
    int s[N+1];

    s[0]=0;
    for(int i=1;i<=N;i++){
        scanf("%d",&a[i]);
        s[i]=s[i-1]+a[i];
    }
    int i,j;
    for(int k=0;k<M;k++){
        scanf("%d %d",&i,&j);
        printf("%d\n",s[j]-s[i-1]);
    }
    return 0;
}