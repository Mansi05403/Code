// author : Mansi Agarwal
// 2023-03-23 16:28:22
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(10*x>=y)
    cout<<y*z<<endl;
    else
    cout<<10*x*z<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}