#include <bits/stdc++.h>
using namespace std;
int f[1005][1005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        memset(f, 0, sizeof(f));
        int n1 = s1.size(), n2 = s2.size();
        int res = 0;
        for (int i = 1; i <= n1; i++)
        {
            for (int j = 1; j <= n2; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    f[i][j] = f[i - 1][j - 1] + 1;
                }
                else
                {
                    f[i][j] = max(f[i - 1][j], f[i][j - 1]);
                    res = max(res, f[i][j]);
                }
            }
        }
        cout << res << endl;
    }
}