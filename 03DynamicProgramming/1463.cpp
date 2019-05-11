#include <iostream>
#include <algorithm>
using namespace std;
int d[1000001];
int makeone(int n){
    if(n==1) return 0;
    if(d[n]>0) return d[n];
    int ret=0;
    d[n]=makeone(n-1)+1;
    if(n%3==0){
        ret=makeone(n/3)+1;
        if(ret<d[n]) d[n]=ret;
    }
    if(n%2==0){
        ret=makeone(n/2)+1;
        if(ret<d[n]) d[n]=ret;
    }
    return d[n];
}
int main(){
    int n;
    d[0]=0;
    cin >> n;
    cout << makeone(n);
    return 0;
}