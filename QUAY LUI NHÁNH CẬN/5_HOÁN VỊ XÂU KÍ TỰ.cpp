#include<bits/stdc++.h>
using namespace std;
int x[1001];
bool unused[101];
void ktao(string s){
    int n=s.size()-1;
    for(int i=1;i<=n;i++){
        unused[i]=true;
    }
}
void display(int x[],string s){
    for(int i=1;i<=s.size()-1;i++){
        cout<<s[x[i]];
    }

}
void tryy(int i, string s ){
    int n=s.size()-1;
    for(int j=1;j<=n;j++)
{
    if(unused[j]==true){
        x[i]=j;
        unused[j]=false;
    if(i==n){
        display(x,s);
            cout<<" ";
    }
    else{
        tryy(i+1,s);
    }
    unused[j]=true;
}
}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        s="d"+s;
        ktao(s);
        tryy(1,s);
        cout<<endl;

    }
}