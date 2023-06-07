// author : Mansi Agarwal
// 2023-03-23 19:17:17
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && a<c)
    cout<<"alice"<<endl;
    else if(b<a && b<c)
    cout<<"bob"<<endl;
    else
    cout<<"charlie"<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}