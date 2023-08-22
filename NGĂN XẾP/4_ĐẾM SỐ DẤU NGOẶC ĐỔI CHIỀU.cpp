#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        stack<char> st;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
          if(s[i]=='('|| s[i]==')'&&st.size()==0) 
          st.push(s[i]);
          else if(s[i]==')'){
            if(st.top()=='('&&st.empty()==0){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
          }
    }
    int d1=0;
    int d2=0,res=0;
    while(st.size()!=0){
        if(st.top()==')') d2++;
        else d1++;
        st.pop();
    }
    res=d1/2+d2/2+d1%2+d2%2;
    cout<<res<<endl;
}}