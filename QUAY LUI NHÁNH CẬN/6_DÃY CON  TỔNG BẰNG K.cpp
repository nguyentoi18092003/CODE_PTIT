#include <bits/stdc++.h>
using namespace std;
int x[11];
int n, k;
int a[11];
void nhap()
{
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}
void result(vector<vector<int>> &v)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 1)
            sum += a[i];
    }
    if (sum == k)
    {
        vector<int> k;
        for (int i = 1; i <= n; i++)
        {
            if (x[i] == 1)
            {
                k.push_back(a[i]);
            }
        }
        v.push_back(k);
    }
}
void tryy(int i, vector<vector<int>> &v)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n)
        {
            result(v);
        }
        else
        {
            tryy(i + 1, v);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<int>> v;
        cin >> n >> k;
        nhap();
        sort(a + 1, a + n + 1);
        tryy(1, v);
        sort(v.begin(), v.end());
        if(v.size()==0)cout<<"-1\n";
        else{
        for (int i = 0; i < v.size(); i++)
        {
            cout<<"[";
            for (int j = 0; j < v[i].size(); j++)
            {
                cout << v[i][j];
                if(j!=v[i].size()-1) cout<<" ";
            }
            cout << "] ";
        }
            cout<<endl;
    }
}
}