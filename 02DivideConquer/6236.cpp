#include <iostream>
#include <algorithm>
using namespace std;
int pay[100001];
int N, M;
bool solve(int mid){
    int num = 1;
    int wallet = mid;
    for(int i=0;i<N;i++){
        if(mid<pay[i]) return false;
        if(wallet<pay[i]){
            num++;
            wallet = mid;
        }
        wallet -= pay[i];
    }
    return M>=num;
}
int main(){
    int sum=0;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        cin >> pay[i];
        sum += pay[i];
    }
    int left=1, right = sum;
    while(left<=right){
        int mid =(left+right)/2;
        if(solve(mid))
            right = mid -1;
        else left = mid +1;
    }
    cout << left;
    return 0;
}