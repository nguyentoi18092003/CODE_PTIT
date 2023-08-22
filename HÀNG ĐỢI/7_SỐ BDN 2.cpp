#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    queue<string> q;
    q.push("1");
    while(!q.empty()){
      string top=q.front();
      if(stoll(top)%n==0){
        cout<<top<<endl;
        break;
      }
      q.pop();
      q.push(top+"0");
      q.push(top+"1");
    }
  }
}