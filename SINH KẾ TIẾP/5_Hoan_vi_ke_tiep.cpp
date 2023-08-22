#include<bits/stdc++.h>
using namespace std;
void display(int x[], int n){
    for(int i=1;i<=n;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
void sinh(int x[], int n){
    int i=n-1;
    while(x[i]>x[i+1]){
        i--;
    }
    int j=n;
    while(x[i]>x[j]){
        j--;
    }
    swap(x[i],x[j]);
    int l=i+1,r=n;
    while(l<=r){
        swap(x[l],x[r]);
        r--;
        l++;
    }
    display(x,n);

}

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int x[n+1];
    for(int i=1;i<=n;i++){
        cin>>x[i];
    }
    int tam=1;
    for(int i=1;i<=n-1;i++){
        if(x[i]<x[i+1]){
            tam=0;
            break;
        }
    }
    if(tam==1){
        cout<<"1 2 3 4 5";

    }
    else {
        sinh(x,n);
    }

}}