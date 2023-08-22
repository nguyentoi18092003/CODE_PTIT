#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> se;
        se.insert(n);
        queue<pair<int,int>>q;
        q.push({n,0});
        while(!q.empty()){
            pair<int,int> tmp=q.front();
            q.pop();
            if(tmp.first==1){
                cout<<tmp.second;
                break;
            }
            if(tmp.first-1>0&&se.count(tmp.first-1)==0){
                q.push({tmp.first-1,tmp.second+1});
                se.insert(tmp.first-1);
            }
            for(int i=2;i*i<=tmp.first;i++){
                if(tmp.first%i==0){
                    if(se.count(tmp.first/i)==0){
                        q.push({tmp.first/i,tmp.second+1});
                        se.insert(tmp.first/i);
                    }
                }
            }
        }
        cout<<endl;
    }

}