// author : Mansi Agarwal
// 2023-03-23 19:25:40
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    map<int,int> mp;
    mp[x]++;
    mp[y]++;
    mp[z]++;
    for(auto i:mp)
    {
        if(i.second>1 && i.first>1)
        i.first---;
        if(mp.size()==3)
        break;
        
    }
    cout<<i.first<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}