#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
struct edge{
    int to, cost;
    edge(int to, int cost) : to(to), cost(cost){
    }
};
const int MAX = 100111;
vector<edge> a[MAX];
int parent[MAX];
bool check[MAX];
int depth[MAX];
int dist[MAX];

int lca(int u, int v)
{
    int distance = 0;
    if (depth[u] < depth[v])
    {
        swap(u, v);
    }
    while (depth[u] != depth[v])
    {
        distance += dist[u];
        u = parent[u];
    }
    while (u != v)
    {
        distance += dist[u];
        distance += dist[v];
        u = parent[u];
        v = parent[v];
    }
    return distance;
}

int main()
{
    int n;
    scanf("%d", &n);
 
    for (int i = 1; i < n; i++)
    {
        int u, v, c;
        scanf("%d %d %d", &u, &v, &c);
        a[u].push_back(edge(v,c));
        a[v].push_back(edge(u,c));
    }
    depth[1] = 0;
    check[1] = true;
    queue<int> q;
    q.push(1);
    parent[1] = 0;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (edge &e : a[x])
        {   
            int y = e.to;
            if (!check[y])
            {
                depth[y] = depth[x] + 1;
                check[y] = true;
                parent[y] = x;
                dist[y] = e.cost;
                q.push(y);
            }
        }
    }
    
    int m;
    scanf("%d", &m);
    int u, v;

    for(int i=0;i<m;i++){
        scanf("%d %d", &u, &v);
        printf("%d\n", lca(u, v));
    }

    return 0;
}