#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void np(){
    queue<string> q;
    q.push("1");
    while(v.size()<10000){
        string top=q.front();
        v.push_back(top);
        q.pop();
        q.push(top+"0");
        q.push(top+"1");
    }
    
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    np();
    for(int i=0;i<=n-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
}