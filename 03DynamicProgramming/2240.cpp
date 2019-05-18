#include <iostream>
#include <algorithm>
#define max_int 1001

using namespace std;

int d[max_int][32];
int a[max_int];
int t, w;

int main(){
    scanf("%d %d", &t, &w);
    
    for(int i=1; i<=t; i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=1; i<=t; i++){
        for(int j=w; j>=0; j--){
            //1에 자두
            if(a[i]%2 == 1){
                // 내가 1에 있는 경우
                if(j%2 == 0){
                    d[i][j] = max(d[i-1][j], d[i-1][j+1]) + 1; // 예전에 1에 있었음, 예전에 2에 있었음
                }
                else{
                    d[i][j] = max(d[i-1][j], d[i-1][j+1]);
                }
                
            }
            //2에 자두
            else{
                
                if(j%2 ==0){
                    d[i][j] = max(d[i-1][j], d[i-1][j+1]);
                }
                else{
                    d[i][j] = max(d[i-1][j], d[i-1][j+1]) + 1;
                }
            }
        }
    }
    
    int result = 0;
    for(int j=0; j<=w; j++){
        result = max(result, d[t][j]);
    }
    printf("%d\n", result);
    
}
