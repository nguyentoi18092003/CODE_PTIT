#include<bits/stdc++.h>
using namespace std;
int n,x[100];
void ktao(){for(int i=1;i<=n;i++){
x[i]=i;
}
}
bool check(){
for(int i=n-1;i>=1;i--){
if(x[i]<x[i+1])
return false;
}
return true;
}
void sinh(){
int i=n-1;
while(x[i]>x[i+1]){
i--;
}
int j=n;
while(x[i]>x[j]){
j--;
}
swap(x[i],x[j]);
int l=i+1,r=n;
while(l<=r){
swap(x[l],x[r]);
l++;
r--;
}
}
void display(){
for(int i=1;i<=n;i++){
cout<<x[i];
}
cout<<endl;
}
int main(){
cin>>n;
ktao();
display();
while(check()==false){
sinh();
display();
}
return 0;
}