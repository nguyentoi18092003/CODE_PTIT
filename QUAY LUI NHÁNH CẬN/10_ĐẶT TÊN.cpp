   #include<bits/stdc++.h>
   using namespace std;
   int k,n;
   int x[31];
   void result(int x[],int k,string b[]){
      for(int i=1;i<=k;i++){
         cout<<b[x[i]]<<" ";
      }
      cout<<endl;
   }
   void tryy(int i,int m,string b[]){
      for(int j=x[i-1]+1;j<=m-k+i;j++){
         x[i]=j;
         if(i==k)result(x,k,b);
         else{
            tryy(i+1,m,b);
         }
         
      }
   }
   int main(){
      cin>>n>>k;
      set<string> se;
      while(n--){
         string s;
         cin>>s;
         se.insert(s);
      }
      int m=se.size();
      string b[m+1];
      int i=1;
      for(string x:se){
         b[i]=x;
         i++;
      }
      tryy(1,m,b);
      /*for(auto x:se){
         cout<<x<< " ";
      }*/

   }