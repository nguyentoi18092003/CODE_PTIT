#include<bits/stdc++.h>
using namespace std;
int n, x[100];
void ktao(){
for(int i=1;i<=n;i++){
x[i]=0;
}
}
bool check(){
for(int i=n;i>=1;i--){
if(x[i]==0)
return false;
}
return true;
}
void sinh(){
int i=n;
while(x[i]==1){
x[i]=0;
i--;
} x
[i]=1;
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
}