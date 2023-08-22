#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,s;
      cin>>n>>s;
      int a[n+1];
      for(int i=1;i<=n;i++){
         cin>>a[i];
      }
      bool dp[s+1];
      memset(dp,false,sizeof(dp));
      dp[0]=true;
      for(int i=1;i<=n;i++){
         for(int j=s;j>=a[i];j--){// phiar xet tu s quay nguwocj
            if(dp[j-a[i]])dp[j]=true;
         }
      }
      if(dp[s])cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
      


   }
}