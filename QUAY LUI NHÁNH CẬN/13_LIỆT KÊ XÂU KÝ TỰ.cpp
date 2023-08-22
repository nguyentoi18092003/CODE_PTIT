#include<bits/stdc++.h>
using namespace std;
int x[20];
char c;
int k;
void result(int x[],int k,char b[]){
   for(int i=1;i<=k;i++){
      cout<<b[x[i]];
   }
   cout<<endl;
   

}
void tryy(int i,int n,char b[]){
   for(int j=x[i-1];j<=n;j++){
      if(i!=1)
      x[i]=j;
      else x[i]=j+1;
      if(i==k)result(x,k,b);
      else tryy(i+1,n,b);
   }
}
int main(){
   cin>>c>>k;
   int n=int(c-'A')+1;
   //cout<<n<<endl;
   char b[n+1];
   for(int i=1;i<=n;i++){
      b[i]=char('A'+i-1);
   }
   tryy(1,n,b);
}