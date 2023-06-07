// author : Mansi Agarwal
// 2023-03-23 16:34:56
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
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