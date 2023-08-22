#include<bits/stdc++.h>
using namespace std;
void display(int x[],int k){
    char t='A';
    for(int i=1;i<=k;i++){
        t+=x[i]-1;
        cout<<t;
        t='A';
    }
    cout<<endl;
}
bool check(int x[],int n,int k){
    for(int i=k;i>=1;i--){
        if(x[i]!=n-k+i){
            return false;
        }

    }
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
        int n,k;
        cin>>n>>k;
        int x[k+1];
        for(int i=1;i<=k;i++){
            x[i]=i;
        }
        display(x,k);
        while(check(x,n,k)==false){
            sinh(x,n,k);
            display(x,k);
        }
        cout<<endl;
    }
}