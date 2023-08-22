#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
void dfs(int u,vector<int> adj[]){
    visited[u]=true;
    cout<<u<<" ";
    for(int x:adj[u]){
        if(!visited[x])
        dfs(x,adj);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int V,E,u;
        cin>>V>>E>>u;
        vector<int> adj[V+1];
        for(int i=1;i<=E;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
        }
        memset(visited,false,sizeof(visited));
        dfs(u,adj);
        cout<<endl;
    }
    
    
}