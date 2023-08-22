#include<bits/stdc++.h>
using namespace std;
int check(int x[],int n){
    for(int i=n;i>=1;i--){
        if(x[i]==0)return 0;

    }
    return 1;
}
void sinh(int x[], int n){
    int i=n;
    while(x[i]==1){
        x[i]=0;
        i--;
    }
    x[i]=1;

}
void display(int x[], int n,int k){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=x[i];
    }
    if(sum==k){
         for(int i=1;i<=n;i++){
        cout<<x[i];
    }
     cout<<endl;     
    } 
   
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int x[n+1]={0};
    display(x,n,k);
    while(check(x,n)==0){
        sinh(x,n);
        display(x,n,k);
    }
    
}
}