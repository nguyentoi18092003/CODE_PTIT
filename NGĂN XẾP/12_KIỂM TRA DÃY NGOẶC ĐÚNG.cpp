#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> st;
        int tam=1;
        for(int i=0;i<s.size();i++){
            if((s[i]=='[')||(s[i]=='{')||(s[i]=='(')){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    if(s[i]==']'&&st.top()=='['){
                        st.pop();
                    }
                     else if(s[i]=='}'&&st.top()=='{'){
                        st.pop();
                     }
                     else if(s[i]==')'&&st.top()=='('){
                        st.pop();
                     }
                     else{
                        tam=0;
                        break;
                     }
                }
                else{
                    tam=0;
                    break;
                }
               
            }
        }
        if(st.empty()&&tam==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
     
    }
}