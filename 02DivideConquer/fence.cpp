#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<int> &f, int left, int right){
    // 종료 조건: 판자 하나일 경우
    if(left==right) return f[left];
    //[left, mid]왼쪽, [mid+1, right]오른쪽의 두 구간으로 문제 분할
    int mid = (left+right)/2;
    //분할해서 최댓값 구하기
    int ret = max(solve(f,left, mid),solve(f,mid+1, right));
    //부분 문제 3:두 부분에 모두 걸치는 사각형 중 가장 큰 것
    int lo = mid, hi = mid+1;
    int height = min(f[lo],f[hi]);
    //[mid, mid+1]만 포함하는 너비 2인 사각형 고려
    ret = max(ret, height*2);
    //사각형이 전체를 덮을 때까지 확장
    while(left < lo || hi < right){
        //항상 높이가 더 높은쪽으로 확장
        // 오른쪽 맨끝이 아니고, 더이상 왼쪽 확장 불가이거나 오른쪽 높이가 클 때
        if(hi<right && (lo == left || f[lo - 1] < f[hi + 1])){
            ++hi; // 오른쪽으로 한칸 옆으로
            height = min(height, f[hi]);
        }
        else{
            --lo; // 왼쪽으로 한칸 옆으로
            height = min(height, f[lo]);
        }
        //확장 후 사각형의 넓이
        ret = max(ret, height*(hi-lo+1));
    }
    return ret;
}
int main(){
    int c;
    cin >> c;
    for(int i=0;i<c;i++){
        int n;
        cin >> n;
        vector <int> f(n);
        for(int j=0;j<n;j++){
            cin >> f[j];
        }
        cout << solve(f,0,n-1)<< " ";
    }
}