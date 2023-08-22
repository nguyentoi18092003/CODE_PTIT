#include<bits/stdc++.h>
using namespace std;
int cnt=0;
bool check(int a[],int n){
    for(int i=n;i>=1;i--){
        if(a[i]==0)return false;
    }
    return true;
}
void sinh(int x[],int n){
    int i=n;
    while(x[i]==1){
        x[i]=0;
        i--;
    }
    x[i]=1;  
}
void display(int x[],int n,int k, int a[]){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=x[i]*a[i];
    }
    if(sum==k){
        cnt++;
        for(int i=1;i<=n;i++){
            if(x[i]!=0){
                cout<<a[i]<<" ";
            }
        }
          cout<<endl;
    }
  

}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n+1];
    int x[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    display(x,n,k,a);
    while(check(x,n)==false){
        sinh(x,n);
        display(x,n,k,a);
    }
    cout<<cnt;
    



}