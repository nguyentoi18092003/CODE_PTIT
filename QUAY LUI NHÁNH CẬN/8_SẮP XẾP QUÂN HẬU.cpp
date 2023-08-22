#include<bits/stdc++.h>
using namespace std;
int A[20],B[20],n,Xuoi[20],Nguoc[20],dem=0;
void tryy(int i){
    for(int j=1;j<=n;j++){
        if(B[j]==0 && Xuoi[i-j+n]==0 && Nguoc[i+j-1]==0){
            A[i]=j;
            B[j]=1;
            Xuoi[i-j+n]=1;
            Nguoc[i+j-1]=1;
            if(i==n) dem++;
            else tryy(i+1);
            B[j]=0;Xuoi[i-j+n]=0; Nguoc[i+j-1]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        dem=0;
    cin>>n;
    tryy(1);
    cout<<dem<<endl;
}
}
