#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int a[n+1];
      int l[n+1]={0};
      long long dp[n+1];
      long long res=0;
      for(int i=1;i<=n;i++){
         cin>>a[i];
      }
      for(int i=1;i<=n;i++){
         dp[i]=a[i];
         for(int j=1;j<i;j++){
            if(a[i]>a[j]){
               dp[i]=max(dp[j]+a[i],dp[i]);
               res=max(res,dp[i]);

            }
             
         }

      }
      cout<<res<<endl;


   }
}