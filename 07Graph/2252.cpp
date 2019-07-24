#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n+1);
    int indegree[n+1]={0};
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        indegree[b]++;
    }
    queue<int> q;
    for(int i=1;i<n+1;i++)
        if(indegree[i]==0)
            q.push(i);

    while(!q.empty()){
        int f = q.front();
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