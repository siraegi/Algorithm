#include <iostream>
#define MAXN 100
using namespace std;
int weight[MAXN], value[MAXN], capacity;
int max_set[MAXN], max_set_size =0, max_value = 0;
int n, c;
int V(int capacity, int m){
    int ret;
    if(m==0) return 0;
    if(capacity-weight[m-1]>=0)
        ret = max(value[m-1]+V(capacity-weight[m-1],m-1),V(capacity,m-1));
    else ret = V(capacity,m-1);
    return ret;
}
int main(){
    int i;
    cin >> n >> c;
    //for(i=0;i<n;i++)
    //    cin >> value[i];
    //for(i=0;i<n;i++)
    //    cin >> weight[i];
    for(i=0;i<n;i++)
        cin >> weight[i]>>value[i];
    cout << V(c, n);
    return 0;
}