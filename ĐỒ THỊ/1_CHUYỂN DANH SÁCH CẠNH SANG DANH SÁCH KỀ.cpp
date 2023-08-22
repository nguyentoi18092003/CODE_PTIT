#include<bits/stdc++.h>
using namespace std;
int V,E;
int main(){
    int t;
    cin>>t;
        while(t--){
            cin>>V>>E;
            vector<int> adj[V+1];
            for(int i=1;i<=E;i++){
                int x,y;
                cin>>x>>y;
                adj[x].push_back(y);
                adj[y].push_back(x);
            }
          for(int i=1;i<=V;i++)
          {
            cout<<i<<": ";
            for(auto x: adj[i]){
                cout<<x<<" ";
            }
            cout<<endl;
                      }
            
        }
}