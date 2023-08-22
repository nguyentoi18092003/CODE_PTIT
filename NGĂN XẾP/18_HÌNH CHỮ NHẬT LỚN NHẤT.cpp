#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    ll a[n];
    stack<ll> st;
    ll res=-1e9;
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
    int i=0;
    while(i<n){
        if(st.empty()||a[i]>=a[st.top()]){
            st.push(i);
            i++;
        }
        else{
            ll idx=st.top();
            st.pop();
            if(st.empty()){
                res=max(res,i*a[idx]);
            }
            else{
                res=max(res,a[idx]*(i-st.top()-1));
            }
        }
       
    }
      while(!st.empty()){
        ll idx=st.top();
        st.pop();
        if(st.empty()){
            res=max(res,i*a[idx]);
        }
        else{
            res=max(res,a[idx]*(i-st.top()-1));
        }

    }
    cout<<res<<endl;
   }
    }
   
   
