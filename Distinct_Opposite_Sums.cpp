// author : Mansi Agarwal
// 2023-03-21 00:21:53
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n/2;i++)
    cout<<i<<" ";
    for(int i=n;i>n/2;i--)
    cout<<i<<" ";
    cout<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}