#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
//  2  3  4  5
// 9  8  7  6
//  10 11 12 13
// 17 16 15 14
   
    // for(int i=1;i<20;i++)
    //     cout << i <<" "<<i/4<<" "<<i%4<<endl;

    long long a = n/4;
    long long b = n%4;
    int ans;

    switch(b){
        case 2:{
            if(a%2==0) ans = 2;
            else ans = 4;
            break;
        }
        case 3:{
            // if(a%2==0) ans = 3;
            // else ans = 3;
            ans = 3;
            break;
        }
        case 0:{
            if(a%2==0) ans = 2;
            else ans = 4;
            break;
        }
        case 1:{
            if(a%2==0) ans = 1;
            else ans = 5;
            break;  
        }
    } 
    cout << ans;
    return 0;
}