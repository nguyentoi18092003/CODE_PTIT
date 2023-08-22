#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
  ll k;
  string s;
  cin>>k>>s;
  map<char,ll> mp;
  priority_queue<int> q;
  for(int i=0;i<s.size();i++){
    mp[s[i]]++;
  }
  for(auto x:mp){
    q.push(x.second);
  }
  while(k!=0){
    ll dau=q.top();
    q.pop();
    if(dau==0)break;
    dau--;
    q.push(dau);
    k--;
  }
  long long tong=0;
  while(!q.empty()){
    ll dau=q.top();
    q.pop();
    tong=tong+dau*dau;

  }
  cout<<tong<<endl;
}}