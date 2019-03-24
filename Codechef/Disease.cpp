#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void BFSUtil(int u, vector<int> adj[],vector<bool> &visited)
{
    list<int> q;
    visited[u] = true;
    q.push_back(u);  
    while(!q.empty())
    {
        u = q.front();
        q.pop_front();
        for (int i = 0; i != adj[u].size(); ++i)
        {
            if (!visited[adj[u][i]])
            {
                visited[adj[u][i]] = true;
                q.push_back(adj[u][i]);
            }
        }
    }
}
int BFS(vector<int> adj[], int V)
{
    vector<bool> visited(V, false);
    int count = 0;
    for (int u=0; u<V; u++){
        if (visited[u] == false){
            count++;
            BFSUtil(u, adj, visited);
        }
    }
    return count;
}
int main()
{
    
    int t,n,r;
    cin>>t;

    while(t--){
        cin>>n;
        cin>>r;
        int x,y;
        vector<int> adj[n];
        for(int i=0;i<r;i++){
            cin>>x>>y;
            addEdge(adj,x,y);
        }
        cout<<BFS(adj, n)<<endl;
    }
    return 0;
}
