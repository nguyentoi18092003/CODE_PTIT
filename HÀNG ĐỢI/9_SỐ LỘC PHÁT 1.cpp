#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
   
    while(t--){
        int n;
        cin>>n;
    vector<string> v;
    queue<string> q;
    q.push("6");
    q.push("8");
    while(1){
        string top=q.front();
        q.pop();
        if(top.size()>n)break;
        v.push_back(top);
        q.push(top+"6");
        q.push(top+"8");


    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
}