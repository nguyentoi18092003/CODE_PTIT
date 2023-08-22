#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N,V;
        cin>>N>>V;
        int a[N+1],c[N+1];
          int dp[N+1][V+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=N;i++){
            cin>>a[i];
        }
        for(int i=1;i<=N;i++){
            cin>>c[i];
        }
      
        for(int i=1;i<=N;i++){
            for(int j=1;j<=V;j++){
                dp[i][j]=dp[i-1][j];
                if(j>=a[i]){
                    dp[i][j]=max(dp[i][j],dp[i-1][j-a[i]]+c[i]);
                }
            }
        }
        cout<<dp[N][V]<<endl;
    }
}