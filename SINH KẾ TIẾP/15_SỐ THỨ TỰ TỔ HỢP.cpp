#include<bits/stdc++.h>
using namespace std;
int cnt;
bool display(int x[],int k,int a[]){
    for(int i=1;i<=k;i++){
        if(x[i]!=a[i]){
            cnt++;
            return false;
        }
    }
    cout<<cnt++<<endl;
    return true;
}
void sinh(int x[], int n, int k){
    int i=k;
    while(x[i]==n-k+i){
        i--;
    }
    x[i]++;
    for(int j=i+1;j<=k;j++){
        x[j]=x[j-1]+1;

    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
         cnt=0;
        int n,k;
        cin>>n>>k;
        int x[k+1];
        int a[k+1];
        for(int i=1;i<=k;i++){
            x[i]=i;
        }
        for(int i=1;i<=k;i++){
            cin>>a[i];
        }
        display(x,k,a);
        while(display(x,k,a)==false){
            sinh(x,n,k);

        }
    }
}