#include "iostream"
using namespace std;
int bills[51];
int pay(int m, int n){
    int cnt=0;
    // 종료 조건
    if(n==1){
        if(m%bills[0]==0) return 1;
        else return 0;
    }
    // 재귀호출
    for(;m>=0;m-=bills[n-1]){
        cnt+=pay(m,n-1);
    }
    //cout << cnt;
    return cnt;
}
int main(){
    int b,money;
    cout << "input number of bills:";
    cin >> b;
    cout << "input bills: ";
    for (int i=0;i<b;i++)
        cin >> bills[i];
    cout << "input money: ";
    cin >> money;
    cout << pay(money,b);
    return 0;
}