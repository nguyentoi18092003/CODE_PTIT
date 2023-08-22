#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
int V,E;
void dfs(int u,vector<int> adj[]){
    visited[u]=true;
    for(int x:adj[u]){
        if(!visited[x]){
            dfs(x,adj);
        }
    }


}
void dfs1(int u,vector<int> adj[],int a,int b){
    visited[u]=true;
    for(int x:adj[u]){
        if(x==a&&u==b||x==b&&u==a)continue;
        if(!visited[x]){
            dfs1(x,adj,a,b);
        }
    }
}
void canhcau(vector<int> adj[],pair<int,int> canh[]){
    memset(visited,false,sizeof(visited));
    int k=0;
    for(int i=1;i<=V;i++){
        if(!visited[i]){
            k++;
            dfs(i,adj);
        }
    }
    for(int i=1;i<=E;i++){
        int a=canh[i].first;
        int b=canh[i].second;
        int cnt=0;
        memset(visited,false,sizeof(visited));
        for(int j=1;j<=V;j++){
            if(!visited[j]){
            dfs1(j,adj,a,b);
            cnt++;
            }
        }
        if(cnt>k){
            cout<<canh[i].first<<" "<<canh[i].second<<" ";
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>V>>E;
         pair<int,int> canh[E+1];
         vector<int> adj[V+1];
         for(int i=1;i<=E;i++){
            int x,y;
            cin>>x>>y;
            canh[i].first=x;
            canh[i].second=y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            
         }
         canhcau(adj,canh);
         cout<<endl;

    }
}