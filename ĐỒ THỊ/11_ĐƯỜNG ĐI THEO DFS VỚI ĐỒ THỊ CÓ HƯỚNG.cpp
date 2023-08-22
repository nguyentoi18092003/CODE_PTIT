#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
int parent[1005];
void dfs(int u,vector<int> adj[]){
    visited[u]=true;
    for(int x:adj[u]){
        if(!visited[x]){
            parent[x]=u;
           dfs(x,adj);
        }
    }
}
void pathh(int s,int t,vector<int> adj[]){
     
    dfs(s,adj);
    vector<int> res;
    if(visited[t]){
    while(t!=s){
        res.push_back(t);
        t=parent[t];  
    }
    res.push_back(s);
    reverse(res.begin(),res.end());
    for(int x:res){
        cout<<x<<" ";
    }
}
else cout<<-1;
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
        memset(parent,0,sizeof(parent));
        pathh(s,t,adj);

        cout<<endl;
    }
}