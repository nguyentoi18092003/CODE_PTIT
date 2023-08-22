#include<bits/stdc++.h>
using namespace std;
void ktao(int x[], int n){
    for(int i=1;i<=n;i++){
        x[i]=n-i+1;
    }

}
bool check(int x[], int n){
    for(int i=n-1;i>=1;i--){
        if(x[i]>x[i+1])
        return false;
    }
    return true;
}
void sinh(int x[],int n){
    int i=n-1;
    while(x[i]<x[i+1]){
        i--;
    }
    int j=n;
    while(x[i]<x[j]){
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
void display(int x[],  int n){
    for(int i=1;i<=n;i++){
        cout<<x[i];
    }
    cout<<" ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x[n+1];
        ktao(x,n);
        display(x,n);
        while(check(x,n)==false){
            sinh(x,n);
            display(x,n);
        }
        cout<<endl;
    }

}
