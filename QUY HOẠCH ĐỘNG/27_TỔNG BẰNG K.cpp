#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000000+7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int f[k+1];
        memset(f,0,sizeof(f));
        f[0]=1;// co 1 cach de tao ra tong bang khoogn la tap rong
        for(int i=1;i<=k;i++){// tong chay tu 1 den k
            for(int j=1;j<=n;j++){// xet tuwng cac phan tu;
                if(i>=a[j]){
                    f[i]=(f[i]+f[i-a[j]])%MOD;//so cach lay tong cac phan tu cua a de bang i
                    // i-a[j]:phan bu
                }
            }

        }
        cout<<f[k]<<endl;
    }
}