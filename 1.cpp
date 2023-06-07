// author : Mansi Agarwal
// 2023-03-25 17:03:00
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<fact<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}