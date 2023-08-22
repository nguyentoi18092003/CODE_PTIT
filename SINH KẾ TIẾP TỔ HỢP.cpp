#include<bits/stdc++.h>
using namespace std;int k,n,x[100];
void ktao(){
for(int i=1;i<=k;i++){
x[i]=i;
}
}
bool check(){
for(int i=k;i>=1;i--){
if(x[i]!=n-k+i)
return false;
}
return true;
}
void sinh(){
int i=k;
while(x[i]==n-k+i){
i--;
} x
[i]++;
for(int j=i+1;j<=k;j++){
x[j]=x[j-1]+1;
}
}
void display(){
for(int i=1;i<=k;i++){
cout<<x[i];
}
cout<<endl;
}
int main(){
cin>>n>>k;
ktao();
display();
while(check()==false){
sinh();
display();
}
}