#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    stack<int> st;
    st.push(-1);
    int Max=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='(') 
      st.push(i);
      else {
        st.pop();
        if(st.size()>0){
          Max=max(Max,i-st.top());
        }
        if(st.size()==0)st.push(i);

      }
    }
    cout<<Max<<endl;
  
}
}