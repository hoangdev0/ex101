#include <bits/stdc++.h>
using namespace std;
int a[122];
int main()
{
    memset(a, 0, sizeof a);
    string n;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
        a[n[i]]++;
    int d(0);
    for (int i = '0'; i <= '9'; i++)
        if (a[i] > 0)
            d++;
    cout << (d > 2 ? "NO" : "YES");
    return 0;
}