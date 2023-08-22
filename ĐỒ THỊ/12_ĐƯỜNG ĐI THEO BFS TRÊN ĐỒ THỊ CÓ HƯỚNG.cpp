#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
int parent[1005];
void bfs(int u,vector<int> adj[]){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(int x:adj[v]){
            if(!visited[x]){
                visited[x]=true;
                q.push(x);
                parent[x]=v;
            }

        }
    }
}
void pathh(int s,int t, vector<int> adj[]){
    bfs(s,adj);
    vector<int> res;
    if(visited[t]){
    while(t!=s){
        res.push_back(t);
        t=parent[t];
    }
    res.push_back(s);
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}else cout<<"-1";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int V,E,s,t;
        cin>>V>>E>>s>>t;
        vector<int> adj[V+1];
        for(int i=1;i<=E;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
        }
        memset(visited,false,sizeof(visited));
        memset(parent,0,sizeof(0));
        pathh(s,t,adj);
        cout<<endl;
    }
}