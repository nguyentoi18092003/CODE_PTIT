#include<bits/stdc++.h>
using namespace std;
bool visited[10000];
int V,E;
 int cnt=0;
void dfs(int u,vector<int> adj[]){
    visited[u]=true;
    for(int x:adj[u]){
        if(!visited[x])
        dfs(x,adj);
    }
}
void tplt(vector<int> adj[],int V){
   
    for(int i=1;i<=V;i++){
        if(!visited[i]){
            cnt++;
            dfs(i,adj);
        }
    }
   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cnt=0;
        cin>>V>>E;
        vector<int> adj[V+5];
        for(int i=1;i<=E;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        memset(visited,false,sizeof(visited));
        tplt(adj,V);
         cout<<cnt;
        cout<<endl;
    }

}