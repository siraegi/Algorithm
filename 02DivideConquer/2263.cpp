#include <iostream>
using namespace std;
int inorder[100001];
int postorder[100001];
int position[100001];
void solve(int ps, int pe, int is, int ie){
    if(ps>pe||is>ie) return;
    int root = postorder[pe];
    cout << root <<" ";
    int p = position[root];
    solve(ps, ps+p-is-1, is , p-1);
    solve(ps+p-is,pe-1,p+1,ie);
}
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> inorder[i];
    for (int i = 0; i < n; i++)
        cin >> postorder[i];
    for (int i = 0; i < n; i++)
        position[inorder[i]]=i;
    
    solve(0,n-1,0,n-1);
}