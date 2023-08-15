#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7;
int main()
{
    int n, k, i;
    cin >> n >> k >> i;
    for (int j = 1, x; j <= n; j++)
    {
        cin >> x;
        if (j == i)
            cout << k << " ";
        cout << x << " ";
    }
    return 0;
}