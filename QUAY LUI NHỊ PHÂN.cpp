#include<bits/stdc++.h>
using namespace std;
int n,x[100];
void result(){
for(int i=1;i<=n;i++){
cout<<x[i];
}
cout<<endl;
}
void ttry(int i){
for(int j=0;j<=1;j++){
x[i]=j;
if(i==n){
result();
}
else{
ttry(i+1);
}
}
}
int main(){
cin>>n;
ttry(1);
}