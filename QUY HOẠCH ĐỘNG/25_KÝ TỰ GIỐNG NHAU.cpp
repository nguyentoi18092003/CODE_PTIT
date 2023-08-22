#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,X,Y,Z;
        cin>>n>>X>>Y>>Z;
        int f[n+1];
        memset(f,0,sizeof(f));
        f[1]=X;//thoi gian de cos  ki tu dau tieen la x(chen ki tu dau tien)
        for(int i=2;i<=n;i++){
            if(i%2==0){
                f[i]=min(f[i-1]+X,f[i/2] +Z);//min cua thoi gian viest n-1 ki tu truoc cong vs ki tu thu i,bang thoi gian de viet den ki tu i/2 sau do sao chep mat z
            }
            else{
                f[i]=min(f[i-1]+X,f[(i+1)/2]+Z+Y);// min caur cai thu nhat vaf thời gian kí tự i+1, (i+1)/2, sau do sao chep, xoa di phần tử i+1;
            }
        }
        cout<<f[n]<<endl;
    }
}