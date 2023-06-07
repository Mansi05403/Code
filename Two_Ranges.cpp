// author : Mansi Agarwal
// 2023-03-23 21:59:18
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    map<int,int> mp;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
      int x = max(a, max(b, max(c, d)));
      int y = min(a, min(b, min(c, d)));

      mp[a]++;
      mp[b]++;
      mp[c]++;
      mp[d]++;
      int cnt=0;
      for(auto c:mp)
      {
        if(c.second>1)
        cnt++;
      }
      if(x==y)
      cout<<1<<endl;
      if(cnt==0)
      cout<<(x-y+1)<<endl;
      else if(x-y>0)
      cout<<(x-y)<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}