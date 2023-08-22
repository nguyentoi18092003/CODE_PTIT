#include<bits/stdc++.h>
using namespace std;
int phatloc(int x[],int n){
    if(x[1]==1&&x[n]==0 && n>=6){
        for(int i=1;i<=n-1;i++){
            if(x[i]==1 &&x[i+1]==1)
            return 0;
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            while (!x[i] && i <= n) {
                cnt++;
                i++;
            }
            if (cnt > 3) return 0;
            cnt = 0;
        }
         return 1;
    }
    return 0;
   
}
bool check(int x[],int n){
    for(int i=n;i>=1;i--){
        if(x[i]==0 )return false;
    }
    return true;
}
void sinh(int x[], int n){
    int i=n;
    while(x[i]==1){
        x[i]=0;
        i--;
    }
    x[i]=1;
}
void display(int x[], int n){
    if(phatloc(x,n)){
        for(int i=1;i<=n;i++){
            if(x[i]==1)cout<<'8';
            else cout<<'6';
        }
           cout<<endl;
    }
 


}
int main(){
    int n;
    cin>>n;
    int x[n+1]={0};
    display(x,n);
    while(check(x,n)==false){
        sinh(x,n);
        display(x,n);
    }
}