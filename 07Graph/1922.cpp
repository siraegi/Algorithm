#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Prim's Algorithm
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
    
    for(int i=0;i<m;i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back(b,c);
        v[b].push_back(a,c);
    }
    priority_queue <edge, vector<edge>, greater<int>> q;
    bool visit[n+1]={false};
    for(int i=1;i<n+1;i++)
        if(indegree[i]==0)
            q.push(i);

    while(!q.empty()){
        int f = q.top();
        cout << f << " ";
        q.pop();
        for(int i=0;i<v[f].size();i++){
            indegree[v[f][i]]--;
            if(indegree[v[f][i]]==0){
                q.push(v[f][i]);
            }
        }
    }
    return 0;
}

 
/*
// Kruskal's Algorithm
struct edge
{
    int u, v, weight;
    bool operator<(const edge &other) const
    {
        return weight > other.weight;
    }
};

struct OptimizedDisjointSet
{
    vector<int> parent, rank;

    OptimizedDisjointSet(int n) : parent(n + 1), rank(n + 1, 1)
    {
        for (int i = 1; i < n + 1; i++)
            parent[i] = i;
    }

    int find(int v)
    {
        if (v == parent[v])
            return v;

        return parent[v] = find(parent[v]);
    }

    void merge(int u, int v)
    {
        u = find(u);
        v = find(v);

        if (u == v)
            return;

        if (rank[u] > rank[v])
            swap(u, v);
        parent[u] = v;

        if (rank[u] == rank[v])
            rank[v]++;
    }
};
int main(){
    int n, m;
    cin >> n >> m;
    vector<edge> v(m+1);
    priority_queue <edge, vector<edge>> q;

    for(int i=0;i<m;i++){
        edge tmp;
        cin >> tmp.u >> tmp.v >> tmp.weight;
        q.push(tmp);
    }
    
    OptimizedDisjointSet MST(n);
    long total=0;
    while(!q.empty()){
        edge f = q.top();
        q.pop();
        if(MST.find(f.u)!=MST.find(f.v)){
            MST.merge(f.u, f.v);
            total += f.weight;
        }
    }
    cout << total;
    return 0;
}
*/