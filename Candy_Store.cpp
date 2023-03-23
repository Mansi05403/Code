// author : Mansi Agarwal
// 2023-03-22 19:33:43
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int x,y;
    cin>>x>>y;
    int ans=0;
    if(y<=x)
    ans=y;
    else
    ans=x+(y-x)*2;
    cout<<ans<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}