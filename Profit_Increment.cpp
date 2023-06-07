// author : Mansi Agarwal
// 2023-03-23 21:54:03
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int x,y;
    cin>>x>>y;
    int p;
    p=(0.1*x + x )-(x-y);
    cout<<p<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}