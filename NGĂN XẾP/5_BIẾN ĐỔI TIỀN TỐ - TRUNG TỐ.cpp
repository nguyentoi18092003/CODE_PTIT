#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        stack<string> st;
        string s;
        cin>>s;
        for(int i=s.size()-1;i>=0;i--){
            string tmp="";
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^'){
                string fi=st.top();
                st.pop();
                string se=st.top();
                st.pop();
                tmp=tmp+"("+fi+s[i]+se+")";
                st.push(tmp);
            }
            else{
            st.push(string(1,s[i]));
        }
        }
        cout<<st.top()<<endl;
       
    }
}