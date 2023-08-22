#include<bits/stdc++.h>
using namespace std;
void display(string s){
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    cout<<endl;
}
bool check(string s){
    int tam=1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            tam=0;
            break;
        }
    }
    if(tam==1)return true;
    else return false;
}
void sinh(string &s){
    int i=s.size()-1;
    while(s[i]=='0'){
        s[i]='1';
        i--;
    }
    s[i]='0';
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(check(s)==true){
            for(int i=0;i<s.size();i++){
                cout<<'1';
            }
        }else{
            sinh(s);
            display(s);
            
        }
        
    }
}