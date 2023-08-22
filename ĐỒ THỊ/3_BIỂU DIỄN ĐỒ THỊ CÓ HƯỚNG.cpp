#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int V,E;
        cin>>V>>E;
        vector<int> v[V+1];
        for(int i=1;i<=E;i++){
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
        }
        for(int i=1;i<=V;i++){
            cout<<i<<": ";
            for(auto x:v[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
}