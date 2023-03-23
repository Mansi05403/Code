// author : Mansi Agarwal
// 2023-03-20 22:17:42
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto x:mp)
    {
        maxi=max(maxi,x.second);
    }
  cout<<n-maxi<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}