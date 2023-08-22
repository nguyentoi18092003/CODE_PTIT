#include<bits/stdc++.h>
using namespace std;
int utien(char x){
  if(x=='+'||x=='-')return 1;
 if(x=='*'||x=='/')return 2;
   if(x=='^')return 3;
  return -1;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    stack<char> st;
    string kq="";
    for(int i=0;i<s.size();i++){
      if(isalpha(s[i]))kq+=s[i];
      else if(s[i]=='(')st.push(s[i]);
      else if(s[i]==')'){
        while(!st.empty()&&st.top()!='('){
          char c=st.top();
          st.pop();
          kq+=c;
        }
        if(st.top()=='(') st.pop();
      }
      else {
        while(!st.empty()&&utien(s[i])<=utien(st.top())){
          char c=st.top();
          kq+=c;
          st.pop();
        }
        st.push(s[i]);
      }
    }
    while(!st.empty()&&st.top()!='('){
      char c=st.top();
      st.pop();
      kq+=c;
    }
    cout<<kq<<endl;
    
  }
}