#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      long long  dp[n+1]={0};
      dp[0]=1;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=min(3,i);j++){
            dp[i]+=dp[i-j];
        }
      }
      cout<<dp[n]<<endl;
    }
}