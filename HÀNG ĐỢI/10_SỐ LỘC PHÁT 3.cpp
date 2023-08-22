#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void init(){
    queue<string> q;
    v.push_back("6");
    v.push_back("8");
    q.push("6");
    q.push("8");
    while(1){
        string top=q.front();
        q.pop();
        if(top.size()==15){
            break;
        }
        q.push(top+"6");
        q.push(top+"8");
        v.push_back(top+"6");
        v.push_back(top+"8");


    }
}
int main(){
    int t;
    cin>>t;
    init();
    while(t--){
        int n;
        cin>>n;
        vector<string> tmp;
        for(auto x:v){
            if(x.size()==n+1){
                break;
            }
            tmp.push_back(x);
        }
        cout<<tmp.size()<<endl;
        for(int i=tmp.size()-1;i>=0;i--){
            cout<<tmp[i]<<" ";
        }
        cout<<endl;
    }
}