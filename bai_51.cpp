#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7;
int a[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int i(1), j(n), d(1);
    while (i < j)
        if (a[i++] != a[j--])
        {
            d = 0;
            break;
        }
    cout << (d ? "YES" : "NO");
    return 0;
}