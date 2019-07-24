#include <iostream>
using namespace std;
long long calc(long long a, long long b, long long c){
    if(b==0)
        return 1;
    else if(b==1)
        return a%c;
    else if(b%2==0){
        long long temp = calc(a,b/2,c);
        return temp*temp%c;
    }
    else return a*calc(a,b-1,c)%c;
    
}
int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    // (a * b) % c = (a % c * b % c) % c => 제곱에 대해서도 성립
    // (a^b)%c = (a^b/2%c * a^b/2%c)%c
    cout << calc(a,b,c)%c;
    
    return 0;
}