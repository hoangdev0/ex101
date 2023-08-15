#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    return (n == 6 || n == 28 || n == 496 || n == 8128); // n đến 10^9 thì thêm n == 33550336
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1, x; i <= n; i++)
    {
        cin >> x;
        if (check(x))// x ở đây là cái n ở trên cho đứa nào ko học tử tế 
            cout << x << " ";
    }
    return 0;
}