#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
double dp[51][101];
int a[51][51];
void solve(int N, int startDay, int D, int P){
    for(int day=startDay;day<D;day++){
        int cnt=0;
        vector<int> LV;
        for(int j=0,k=0;j<N;j++){
            if(a[P][j]){
                cnt++;
                LV[k++]=j;
            }
        }
        int sum=0;
        for(int j=0;j<cnt;j++){
            sum+=dp[LV[j]][day-1];
            dp[P][day]=1/cnt;
        }
        for(int j=0;j<cnt;j++){
            solve(N,startDay+1, D, LV[j]);
        }
    }
    if(startDay==D) return;

}
int main(){
    int c;
    cin >> c;
    for(int k=0;k<c;k++){
        int N, D, P, T;
        cin >> N >> D >> P;

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)
                cin >> a[i][j];
        }
        cin >> T;
        vector<int> Q(T);
        for(int i=0;i<T;i++)
            cin >> Q[i];
        for(int i=0;i<T;i++)
            solve(N,1, D, P);
        for(int i=0;i<T;i++){
            cout << dp[Q[i]][D];
        }
    }
    return 0;
}