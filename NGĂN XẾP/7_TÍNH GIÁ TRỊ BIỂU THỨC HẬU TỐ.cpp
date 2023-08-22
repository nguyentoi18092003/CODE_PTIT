#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    stack<int> st;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
      if(isdigit(s[i])){
        st.push(s[i]-'0');
      }
      else{
        int top2=st.top();
        st.pop();
        int top1=st.top();
        st.pop();
        if(s[i]=='+'){
          st.push(top1+top2);
        }
        else if(s[i]=='-'){
          st.push(top1-top2);
        }
        else if(s[i]=='*'){
          st.push(top1*top2);
        }
        else{
          st.push(top1/top2);
        }
      }
    }
    cout<<st.top()<<endl;
  }
}