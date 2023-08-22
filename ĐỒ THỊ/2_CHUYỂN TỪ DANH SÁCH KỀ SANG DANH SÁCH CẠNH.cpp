#include<bits/stdc++.h>
using namespace std;
int V,E;
int main(){
   int n;
   cin>>n;
   cin.ignore();
   string s;
    string tmp;
    vector<pair<int,int>>v;
   for(int i=1;i<=n;i++){
    getline(cin,s);
    stringstream ss(s);
    while(ss>>tmp){
        if(i<stoi(tmp)){
            v.push_back({i,stoi(tmp)});
        }
    }

   }
   for(auto x:v){
    cout<<x.first<<" "<<x.second<<endl;
   }

}