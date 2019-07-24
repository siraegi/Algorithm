#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n+1);
    vector<int> t(n+1,0);
    vector<int> c(n+1,0);
    int indegree[n+1]={0};
    for(int i=1;i<=n;i++){
        int a,b,c;
        cin >> a >> b;
        t[i].push_back(a);
        indegree[i]=b;
        for(int j=0;j<b;j++){
            cin >> c;
            v[i].push_back(c);
        }
    }
    queue <int> q;
    for(int i=1;i<n+1;i++)
        if(indegree[i]==0){
            q.push(i);
            c[i] = t[i];
        }
            

    while(!q.empty()){
        int f = q.front();
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