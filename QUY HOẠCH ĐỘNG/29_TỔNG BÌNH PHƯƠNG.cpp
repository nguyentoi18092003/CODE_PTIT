#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int f[n+1];
        memset(f,0,sizeof(f));
        f[1]=1;// số 1 có 1 cách chọn là 1 bình
        for(int i=2;i<=n;i++){
            f[i]=i;// một số n luôn có thể biểu diễn bằng n số 1 bình phương cộng lại 
            for(int j=1;j<=sqrt(i);j++){
                f[i]=min(f[i],f[i-j*j]+1);//công thức phải nhớ f[i] là số cách biểu diễn số i
            }

        }
        cout<<f[n]<<endl;

    }
}