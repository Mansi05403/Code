// author : Mansi Agarwal
// 2023-03-21 00:11:17
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int x;
    cin>>x;
    if(x%2==0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}