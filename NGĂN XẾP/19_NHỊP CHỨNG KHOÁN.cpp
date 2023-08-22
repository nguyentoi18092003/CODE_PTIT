#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
      /*  stack<int> st;
        int r[n];
        for(int i=0;i<n;i++){
            if(st.empty())st.push(i);
            else{
            while(!st.empty()&&a[i]>a[st.top()]){
                r[st.top()]=i;
             st.pop();
            
            }
            st.push(i);
        }
        }
        while(!st.empty()){
            r[st.top()]=-1;
            st.pop();
        }
       /* for(int i=0;i<n;i++){
            if(r[i]!=-1){
                cout<<a[r[i]]<<" ";
            }
            else cout<<-1<<" ";*/
        
        //--------------------
         stack<int> st1;
         st1.push(0);
       
        for(int i=1;i<=n;i++){
            while(st1.size()>1&&a[i]>=a[st1.top()])
             st1.pop();
             //cout<<st1.top();
                cout<<i-st1.top()<<" ";
               
            
            st1.push(i);
        }
        
        while(!st1.empty()){
            st1.pop();
        }
       
        cout<<endl;}

    }
