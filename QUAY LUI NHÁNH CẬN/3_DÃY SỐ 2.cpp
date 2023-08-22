#include<bits/stdc++.h>
using namespace std;
int a[11];
int b[11][11];
int n;
void solve(){
    vector<vector<int>> v;
    cin>>n;
    for(int i=0;i<n;i++){
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
        vector<int>x;
        for(int j=0;j<=c;j++){
            x.push_back(b[i][j]);
        }
        c--;
        v.push_back(x);
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<"[";
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j];
            if(j!=v[i].size()-1){
                cout<<" ";
            }
        }
        cout<<"]";
        cout<<" ";
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    cout<<endl;
    }
}