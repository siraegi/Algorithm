#include <iostream>
#include <algorithm>

using namespace std;
/*
int main(){
    int N,M,K;
    cin >> N >> M >> K;
    int n,m,k;
    n=N/2;
    if(M<n){
        n=M;
        m=M-n;
        N=N-2*n;
    } 
    else{
        N=N-2*n;
        m=M-n;
    }
    while(N+m<K){
        n-=1;
        m++;
        N+=2;
    }
    cout << n;
    return 0;
}
*/
int main(){
    int N,M,K;
    cin >> N >> M >> K;
    cout << min(min(N/2,M),(N+M-K)/3);
    return 0;
}