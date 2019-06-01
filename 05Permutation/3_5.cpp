#include <iostream>
using namespace std;
#define MAXN 101
int bits[MAXN];
int friends[MAXN][MAXN];
int n, min_cut=MAXN;
int min_c[MAXN];
void evaluate(){
    int cut=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=friends[i][0];j++){
            if(bits[friends[i][j]]!=bits[i])
                cut++;
        }
    }
    cut/=2;
    if(min_cut>cut){
        min_cut=cut;
        for(int i=0;i<n;i++)
            min_c[i]=bits[i];
    }
}
void partition(int posb, int index){
    if(posb==0){
        for(int i=index;i<n;i++)
            bits[i]=0;
        evaluate();
    }
    else if(index==n) return;
    else{
        bits[index]=0;
        partition(posb, index+1);
        bits[index]=1;
        partition(posb-1,index+1);
    }
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> friends[i][0];
        for(int j=1;j<=friends[i][0];j++)
            cin >> friends[i][j];
    }
    partition(n/2,0);
    cout << min_cut<<endl;
    for(int i=0;i<n;i++)   
        cout << min_c[i]<<" ";
    return 0;
}