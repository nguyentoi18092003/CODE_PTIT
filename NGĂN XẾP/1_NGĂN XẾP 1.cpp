#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    string s;
    while(cin>>s){
        if(s=="push"){
            int x;
            cin>>x;
            st.push(x);
        }
        else if(s=="show"){
            if(st.size()==0){
                cout<<"empty\n";
                continue;
            }
            else{
                vector<int> v;
                while(st.size()!=0){
                    v.push_back(st.top());
                    st.pop();
                }
                for(int i=v.size()-1;i>=0;i--){
                    cout<<v[i]<<" ";
                    st.push(v[i]);
                }
                cout<<endl;
            }
        }
             else if(s=="pop"){
                st.pop();
             }
        
    }
}