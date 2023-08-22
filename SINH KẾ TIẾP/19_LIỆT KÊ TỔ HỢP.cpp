#include<bits/stdc++.h>
using namespace std;
bool check(int x[],int n,int k){
    for(int i=k;i>=1;i--){
        if(x[i]!=n-k+i)return false;
    }
    return true;
}
void sinh(int x[],int n,int k){
    int i=k;
    while(x[i]==n-k+i){
        i--;
    }
    x[i]++;
    for(int j=i+1;j<=k;j++){
        x[j]=x[j-1]+1;
    }
}
void ktao(int x[],int k){
    for(int i=1;i<=k;i++){
        x[i]=i;
    }

}
void display(int x[],int k,int b[]){
    for(int i=1;i<=k;i++){
        cout<<b[x[i]]<<" ";
    }
    cout<<endl;

}
int main(){
    int n,k;
    cin>>n>>k;
    int x[n+1];
    int  a[n+1];
    set<int > se;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        se.insert(a[i]);
    }
    int  b[se.size()+1];
    int j=0;
    for(auto x: se){
        j++;
        b[j]=x;
    }

   ktao(x,k);
    display(x,k,b);
    while(check(x,j,k)==false){
        sinh(x,j,k);
        display(x,k,b);

    }

}