#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int p[n+1][n+1];
    for(int i=0;i<=n;i++){
        p[i][0] = 1;
        p[i][i] = 1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            p[i][j] = (p[i-1][j-1]+p[i-1][j])%10007;
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=i;j++)
    //         cout<< p[i][j] << " ";
    //     cout << endl;
    // }
    
    cout << p[n][k]%10007;

    return 0;
}