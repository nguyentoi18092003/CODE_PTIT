#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    vector<int> adj[n+1];
    int a[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                adj[i].push_back(j);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int x:adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}