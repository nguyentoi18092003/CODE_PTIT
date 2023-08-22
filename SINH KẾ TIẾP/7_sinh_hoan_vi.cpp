#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> h;
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
void sinh(int x[],int n){
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
        l++;
        r--;
    }

}
void display(int x[],  int n,string b[],string s){
    vector<string> res;
    for(int i=1;i<=n;i++){
        res.push_back(b[x[i]]);
    }
    res.push_back(s);
    h.push_back(res);
}
int main(){
    int x[11];
    int n;
    cin>>n;
    string a[n],b[n-1];
    string s;
    vector<string> v;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s;
    for(int i=0;i<n;i++){
        if(a[i]!=s){
            v.push_back(a[i]);
        }
    }
    //sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
             b[i]=v[i];
    }
    ktao(x,n-1);
    display(x,n-1,b,s);
    while(check(x,n-1)==false){
        sinh(x,n-1);
           display(x,n-1,b,s); 
        
    }
    sort(h.begin(),h.end());
    for(int i=0;i<h.size();i++){
        for(int j=0;j<h[i].size();j++){
            cout<<h[i][j]<<" ";
        }
        cout<<endl;
    }


}
