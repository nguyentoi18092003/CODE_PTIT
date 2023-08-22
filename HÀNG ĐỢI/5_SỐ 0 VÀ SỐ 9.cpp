#include<bits/stdc++.h>
using namespace std;
vector<long long> v;
long long a[101];
void tao(){
    queue<string> q;
    q.push("9");
    v.push_back(9);
    while(q.front().size()<10){// co 10 chu so thi kha nang se chia het dc cho toi da 100
        string top=q.front();
        q.pop();
        q.push(top+"0");
        q.push(top+"9");
        v.push_back(stoll(top+"0"));
        v.push_back(stoll(top+"9"));
    }
    for(int i=1;i<=100;i++){
        for(long long  x:v){
            if(x%i==0){
                a[i]=x;
                break;
            }
        }
    }

}
int main(){
    int t;
    cin>>t;
    tao();
    while(t--){
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
}