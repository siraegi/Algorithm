#include <iostream>
using namespace std;
int f[6][6];
int main(){
    int n;
    cin >> n;
    int a,b;
    for(int i=0;i<n;i++){
        cin >> a >>b;
        if(b<a)
            f[b][a]=1;
        else f[a][b]=1;
    }
    if(n!=3) cout << "Woof-meow-tweet-squeek";
    else if(f[1][3]==1 && f[3][4]==1 && f[1][4]==1)
        cout << "Wa-pa-pa-pa-pa-pa-pow!";
    else cout << "Woof-meow-tweet-squeek";
    // for(int i=1;i<6;i++){
    //     for(int j=1;j<6;j++)
    //         cout << f[i][j]<<" ";
    //     cout << endl;
    // }
    // bool flag = true;
    // if(f[1][3]==1 && f[3][4]==1 && f[1][4]==1){
       
    //     for(int i=1;i<6;i++){
    //         for(int j=1;j<6;j++){
    //             if(i==1 && j==3 || i==1 && j==4 || i==3 && j==4)
    //                 continue;
    //             if(f[i][j]!=0){
    //                 flag=false;
    //                 break;
    //             }
    //         }
    //         if(flag==false) break;
    //     }
    // }
    //if(flag) cout << "Wa-pa-pa-pa-pa-pa-pow!";
    //else cout << "Woof-meow-tweet-squeek";
    
    
    return 0;
}