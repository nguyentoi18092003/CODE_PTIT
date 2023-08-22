#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        int l[n+1];
      //  memset(l,1,sizeof(l));
        int res=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            l[i]=1;
            for(int j=1;j<i;j++){
                if(a[i]>=a[j]){
                    l[i]=max(l[j]+1,l[i]);
                    res=max(res,l[i]);
                }
            }

        }
        cout<<n-res<<endl;
    }
}