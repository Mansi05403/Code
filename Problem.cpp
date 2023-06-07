// author : Mansi Agarwal
// 2023-06-07 20:19:57
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n,m;
    cin>>n>>m;
    int diff=abs(n-m);
    //int difr=m-n;
    if(n==m)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(diff%2==0)
        {
            cout<<"YES"<<endl;
            return;
    }
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