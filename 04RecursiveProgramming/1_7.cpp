#include "iostream"
using namespace std;
int code[21];
void R(int n, int i);
void P(int n, int i){
    if(n<=i){
        for(int i=1;i<=n;i++){
            cout << code[i];
        }
        cout << endl;
        return ;
    }
    code[i+1]=0;
    P(n,i+1);
    code[i+1]=1;
    R(n,i+1);
}
void R(int n, int i){
    if(n<=i){
        for(int i=1;i<=n;i++){
            cout << code[i];
        }
        cout << endl;
        return ;
    }
    code[i+1]=1;
    P(n,i+1);
    code[i+1]=0;
    R(n,i+1);
}
int main(){
    int n;
    cin >> n;
    P(n,0);
    return 0;
}