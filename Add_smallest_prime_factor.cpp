// author : Mansi Agarwal
// 2023-03-21 22:58:44
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

    void solve()
{
    int x, y;
    cin >> x >> y;
    int c = 0;
    if (x % 2 == 0)
    {
        c += (y - x) / 2;
        if ((y - x) % 2 == 1)
            c++;
    }
    else
    {
        c++;
        if (x == 3 || x == 9)
        {
            x += 3;
        }
        else if (x == 5)
        {
            x += 5;
        }
        else
        {
            x += 7;
        }
        c += (y - x) / 2;
        if ((y - x) % 2 == 1)
            c++;
    }

    cout << c << endl;
}



signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}