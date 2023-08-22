#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    string s;
    bool ok;
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                ok=true;
                char dau=st.top();
                st.pop();
                while(dau!='('){
                    if(dau=='+'|| dau=='-'|| dau=='*'||dau=='/')
                        ok=false;
                        dau=st.top();
                        st.pop();
                }
                if(ok)break;
            }
            else{
                st.push(s[i]);
            }
        }
        if(ok==true)cout<<"Yes\n";
        else cout<<"No\n";
    }
}