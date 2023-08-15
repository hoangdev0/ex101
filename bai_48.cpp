#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int i = sqrt(n);
    return (i * i == n);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1, x; i <= n; i++)
    {
        cin >> x; // x<1e9;
        if (check(x))
            cout << x << " ";
    }
    return 0;
}