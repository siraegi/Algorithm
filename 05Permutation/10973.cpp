#include <iostream>
#include <algorithm>
#define Swap(a,b) {int t; t=a; a=b; b=t;}
using namespace std;
int num[10001];
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> num[i];
    int i;
    for(i=n-1;i>0;i--){
        if(num[i]<num[i-1]){
            break;
        }
    }
    if(i==0) cout << -1;
    else{
        i--;
        for(int j=n-1;j>i;j--){
            if(num[j]<num[i]){
                swap(num[j],num[i]);
                break;
            }
        }
        sort(num+(i+1),num+n,greater<int>());
        for(int i=0;i<n;i++)
            cout << num[i]<<" ";
    }
    
    return 0;
}