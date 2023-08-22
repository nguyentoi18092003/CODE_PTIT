#include<bits/stdc++.h>
using namespace std;
int check(int x[],int n){
    for(int i=n;i>=1;i--){
        if(x[i]==0)return 0;

    }
    return 1;
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
    int tam=2;
   if(x[1]==1&& x[n]==0){
    tam=1;
    for(int i=1;i<=n-1;i++){
        if(x[i]==1){
            if(x[i+1]==1){
                tam=0;
                break;
            }
        }
    }
    if(tam==1){
        for(int i=1;i<=n;i++){
            if(x[i]==0){
                cout<<"A";

            }else cout<<"H";
        }
        cout<<endl;
    }
   }
    
   
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int x[n+1]={0};
    display(x,n);
    while(check(x,n)==0){
        sinh(x,n);
        display(x,n);
    }
    
}
}