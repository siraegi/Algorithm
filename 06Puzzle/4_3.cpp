#include <iostream>
using namespace std;
int n;
int check(int a[]){
    int cnt[20]={0};
    for(int i=0;i<n;i++)
        cnt[a[i]]++;
    for(int i=0;i<n;i++){
        if(a[i]!=cnt[i])
            return 0;
    }
    return 1;
}
void rperm(int d, int a[]){
    if(d>=n){
        if(check(a)==1){
            for(int i=0;i<n;i++)
                cout << a[i]<<" ";
            cout << endl;
        }
        return;
    }
    for(int i=0;i<n;i++){
        a[d] = i;
        
        rperm(d+1,a);
    }
}
int main(){
    int arr[20]={0};
    cin >> n;
    rperm(0,arr);
    return 0;
}