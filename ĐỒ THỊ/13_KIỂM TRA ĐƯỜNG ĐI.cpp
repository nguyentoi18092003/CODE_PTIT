#include<bits/stdc++.h>
using namespace std;
bool visited[10000];
void dfs(int u,vector<int> adj[]){
   visited[u]=true;
   for(int x:adj[u]){
      if(!visited[x]){
         dfs(x,adj);
      }
   }
}
int main(){
   int t;
   cin>>t;
   while(t--){
     // memset(visited,false,sizeof(visited));
      int n,m;
      cin>>n>>m;
      vector<int> adj[n+1];
      for(int i=1;i<=m;i++){
         int u,v;
         cin>>u>>v;
         adj[u].push_back(v);
         adj[v].push_back(u);
      }
      int q;
      cin>>q;
      while(q--){
           memset(visited, false, sizeof(visited));
         int x,y;
         cin>>x>>y;
         dfs(x,adj);
         if(visited[y])cout<<"YES";
         else cout<<"NO";
         cout<<endl;
         
      }

   }
}