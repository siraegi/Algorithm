#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct edge
{
    int u, v, weight;
    bool operator<(const edge &other) const
    {
        return weight > other.weight;
    }
};
int main(){
    int n, m;
    cin >> n >> m;
    vector<edge> v(m+1);
    int d[n]={99999,}
    priority_queue <edge, vector<edge>> q;

    for(int i=0;i<m;i++){
        edge tmp;
        cin >> tmp.u >> tmp.v >> tmp.weight;
        q.push(tmp);
    }
    for(int i=0;i<=n;i++){
        
    }
    
    return 0;
}