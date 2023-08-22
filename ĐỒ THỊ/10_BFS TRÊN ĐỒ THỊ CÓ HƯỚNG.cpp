#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
void bfs(int u,vector<int> adj[]){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        cout<<v<<" ";
        for(int x:adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x]=true;
            }
        }
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
        bfs(u,adj);
        cout<<endl;
    }
}
