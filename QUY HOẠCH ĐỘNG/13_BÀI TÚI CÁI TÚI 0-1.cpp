#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int N,V;
      cin>>N>>V;
      int a[N+1],c[N+1];
      for(int i=1;i<=N;i++){
         cin>>a[i];
      }
      for(int i=1;i<=N;i++){
         cin>>c[i];
      }
      int d[N+1][V+1];
      memset(d,0,sizeof(d));
      for(int i=1;i<=N;i++){
         for(int j=1;j<=V;j++){
            d[i][j]=d[i-1][j];
            if(a[i]<=j){
               d[i][j]=max(d[i][j],d[i-1][j-a[i]]+c[i]);
            }

         }
      }
      cout<<d[N][V]<<endl;
   }
}