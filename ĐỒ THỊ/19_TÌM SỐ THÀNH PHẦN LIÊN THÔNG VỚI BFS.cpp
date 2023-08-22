#include<bits/stdc++.h>
using namespace std;
bool visited[10000];
int cnt=0;
void bfs(int u,vector<int> adj[]){
   queue<int> q;
   q.push(u);
   visited[u]=true;
   while(!q.empty()){
      int v=q.front();
      q.pop();
      for(int x:adj[v]){
         if(!visited[x]){
            q.push(x);
            visited[x]=true;
         }
      }

   }
}
void check(int V,vector<int> adj[]){
   for(int i=1;i<=V;i++){
      if(!visited[i]){
         cnt++;
         bfs(i,adj);
      }
   }
}
int main(){
   int t;
   cin>>t;
   while(t--){
      int V,E;
      cin>>V>>E;
      vector<int> adj[V+5];
      for(int i=1;i<=E;i++){
         int u,v;
         cin>>u>>v;
         adj[u].push_back(v);
         adj[v].push_back(u);

      }
      memset(visited,false,sizeof(visited));
      cnt=0;
      check(V,adj);
      cout<<cnt<<endl;

   }

}