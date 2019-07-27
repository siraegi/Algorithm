#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    int i=0, j=0, sum=a[0];
    int cnt=0;

    while(i!=n && j!=n){
        if(sum<m){
            j++;
            sum += a[j];
        }
        else if(sum>m){
            sum -= a[i];
            i++;
            if(i>j){
                j=i;
                sum = a[i];
            }
        }
        if(sum==m){
            // sum == m
            cnt++;
            j++;
            sum += a[j];
        }
    }
    cout << cnt;
    return 0;
}