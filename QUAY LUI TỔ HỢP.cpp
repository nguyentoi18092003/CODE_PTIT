#include<bits/stdc++.h>
using namespace std;
int n,k,x[100];
void result(){
for(int i=1;i<=k;i++){
cout<<x[i];
}
cout<<endl;
}
void ttry(int i){
for(int j=x[i-1]+1;j<=n-k+i;j++){
x[i]=j;if(i==k){
result();
}
else{
ttry(i+1);
}
}
}
int main(){
cin>>k>>n;
ttry(1);
}