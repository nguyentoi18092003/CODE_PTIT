#include<bits/stdc++.h>
using namespace std;
int V,E,u;
bool check[1005];
void DFS(int u,vector<int> adj[]){
   check[u]=true;
   cout<<u<<" ";
    for(auto x:adj[u]){
        if(!check[x]) DFS(x,adj);
    }
}
int main(){
  int t;
  cin>>t;
  while(t--){
   
  cin>>V>>E>>u;
   vector<int> adj[V+1];
    for(int i=1;i<=E;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(check,false,sizeof(check));
    DFS(u,adj);
    cout<<endl;


}}