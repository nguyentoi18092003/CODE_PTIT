#include <bits/stdc++.h>
using namespace std;
int n, x[100], unused[100];
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        unused[i] = true;
    }
}
void result()
{
    for (int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << endl;
}
void ttry(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (unused[j] == true)
        {
            x[i] = j;
            unused[j] = false;
            if (i == n)
            {
                result();
            }
            else
            {
                ttry(i + 1);
            }
            unused[j] = true;
        }
    }
}
int main()
{
    cin >> n;
    ktao();
    ttry(1);
}