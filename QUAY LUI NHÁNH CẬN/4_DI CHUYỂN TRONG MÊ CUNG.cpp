#include<bits/stdc++.h>
using namespace std;
vector<string> v;
bool check;
int a[11][11];
int n;
void init(){
   cin>>n;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         cin>>a[i][j];
      }
   }
   v.clear();
   check=false;
}
void tryy(int i,int j,string s){
   if(i==1&&j==1&&!a[i][j]){
      check=false;
      return;
   }
   if(i==n&&j==n&&a[i][j]){
      check=true;
      v.push_back(s);
      return ;
   }
   if(i<n&&a[i+1][j]){
      tryy(i+1,j,s+"D");
   }
   if(j<n&&a[i][j+1]){
      tryy(i,j+1,s+"R");
   }
   if(i<n&&j<n&&!a[i+1][j]&&a[i][j+1]||i>n||j>n){
      return ;
   }
}
int main(){
   int t;
   cin>>t;
   while(t--){
      init();
      tryy(1,1,"");
      if(check==false)cout<<"-1\n";
      else{
         sort(v.begin(),v.end());
         for(string x:v){
            cout<<x<<" ";
         }
         cout<<endl;
      }


   }
}