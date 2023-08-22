#include<bits/stdc++.h>
using namespace std;
int n;
int a[11];
int b[11][11];
void solve(){
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[0][i]=a[i];
    }
    int c=n-1;
    for(int i=1;i<n;i++){
        for(int j=0;j<c;j++){
            b[i][j]=b[i-1][j]+b[i-1][j+1];
        }
        c--;
    }
    c=n-1;
    for(int i=0;i<n;i++){
        if(i!=n) cout<<"[";
        for(int j=0;j<=c;j++){
            cout<<b[i][j];
            if(j!=c){
                cout<<" ";
            }else{
                cout<<"]";
            }
        }
        c--;
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}