#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000000+7;
int c[1001][1001];
int main(){
    int t;
    cin>>t;
    while(t--){
      //  int c[10000][10000];
    int n,k;
    cin>>n>>k;
    memset(c,0,sizeof(c));
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                c[i][j]=1;
            }else{
                c[i][j]=(c[i-1][j-1]+c[i-1][j])%MOD;
            }
        }
    }
    cout<<c[n][k]<<endl;
}
}
