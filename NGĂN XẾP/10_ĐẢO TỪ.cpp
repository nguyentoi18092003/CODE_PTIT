#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
       string s;
       getline(cin,s);
       stack<string> st;
       string token;
        stringstream ss(s);
        while(ss>>token){
            st.push(token);
        }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;

         

    }
}