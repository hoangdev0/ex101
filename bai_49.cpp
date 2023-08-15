#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7;
bool a[N];
// cách này áp dụng cho số fibonacci <= 23 lớn hơn ko đc
void danhdau()
{
    memset(a, 0, sizeof a);
    a[0] = 1;
    a[1] = a[2] = 1;
    int x(1), y(1), z(2);
    while (z < (int)1e5)
    {
        x = y;
        y = z;
        z = x + y;
        if (z < N)
            a[z] = 1;
        else
            break;
    }
}
int main()
{
    danhdau();
    int n;
    cin >> n;
    for (int i = 1, x; i <= n; i++)
    {
        cin >> x;
        if (a[x] == 1)
            cout << x << " ";
    }
    return 0;
}