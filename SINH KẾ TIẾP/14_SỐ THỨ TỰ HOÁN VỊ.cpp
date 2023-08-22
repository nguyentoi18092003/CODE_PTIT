#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void ktao(int x[], int n){
    for(int i=1;i<=n;i++){
        x[i]=i;
    }
}
bool check(int x[], int n){
    for(int i=n-1;i>=1;i--){
        if(x[i]<x[i+1])
        return false;
    }
    return true;
}
void sinh(int x[], int n){
    int i=n-1;
    while(x[i]>x[i+1])
    i--;
    int j=n;
    while(x[i]>x[j]){
        j--;
    }
    swap(x[i],x[j]);
    int l=i+1,r=n;
    while(l<=r){
        swap(x[l],x[r]);
        l++;
        r--;
    }
}
 bool postion(int x[],int n, int a[]){
    for(int i=1;i<=n;i++){
        if(x[i]!=a[i]){
            cnt++;
            return false;
        }
    }
    cout<<cnt+1<<endl;
    return true;

}
int main(){
    int t;
    cin>>t;
    while(t--){
         cnt=0;
        int n;
        cin>>n;
        int x[n+1],a[n+1];
        ktao(x,n);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        while(postion(x,n,a)==false){
            sinh(x,n);

        }
    }
}
