#include<bits/stdc++.h>
using namespace std;
bool check[1005];
void bfs(int u,vector<int> adj[]){
    queue<int> q;
    q.push(u);
    check[u]=true;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        cout<<v<<" ";
        for(int x:adj[v]){
            if(!check[x]){
                q.push(x);
                check[x]=true;
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
            adj[y].push_back(x);
        }
        memset(check,false,sizeof(check));
        bfs(u,adj);
        cout<<endl;
        
    }
}

