// author : Mansi Agarwal
// 2023-03-23 20:01:31
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int onec=0,xeroc=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        onec++;
        else
        xeroc++;
    }
    if(onec<=xeroc)
    cout<<onec<<endl;
    else
    cout<<xeroc+1<<endl;

}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}