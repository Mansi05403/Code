// author : Mansi Agarwal
// 2023-03-23 00:40:27
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int x,y;
    cin>>x>>y;
    if(x*5>=y)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}