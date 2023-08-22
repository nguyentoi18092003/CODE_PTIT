#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    string s;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        if(s=="PUSH"){
            int x;
            cin>>x;
            st.push(x);
        }
        else if(s=="PRINT"){
            if(st.size()==0){
                cout<<"NONE\n";
            }
            else{
                cout<<st.top();
                cout<<endl;
            }
        }
        else if(s=="POP"){
            if(st.size()!=0)
                st.pop();
             }
        
    }
}