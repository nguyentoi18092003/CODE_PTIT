#include<bits/stdc++.h>
using namespace std;
int main(){
int C,N;
cin>>C>>N;
int  w[N+1];
for(int i=1;i<=N;i++){
   cin>>w[i];
}  
int dp[N+1][C+1];
memset(dp,0,sizeof(dp));
for(int i=1;i<=N;i++){
   for(int j=1;j<=C;j++){
      dp[i][j]=dp[i-1][j];
      if(w[i]<=j){
         dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+w[i]);
      }
   }
}
cout<<dp[N][C]<<endl;

}