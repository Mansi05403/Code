// author : Mansi Agarwal
// 2023-03-23 00:29:38
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    if(n%3==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}