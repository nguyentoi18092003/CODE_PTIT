#include<bits/stdc++.h>
using namespace std;
int main(){
        queue<int> q;
        int n;
        cin>>n;
        while(n--){
            string s;
            cin>>s;
            if(s=="PUSH"){
                int so;
                cin>>so;
                q.push(so);
            }
            else if(s=="PRINTFRONT"){
                if(!q.empty())cout<<q.front()<<endl;
                else cout<<"NONE\n";
            }
            else if(s=="POP"){
                if(!q.empty()) q.pop();
            }
        
            }
        }
    
