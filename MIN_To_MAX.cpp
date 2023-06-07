// author : Mansi Agarwal
// 2023-03-23 16:05:30
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
    int mini=INT_MAX;
     for(int i=0;i<n;i++)
     {
        
        mini=min(mini,arr[i]);
     }
     int c=0;
      for(int i=0;i<n;i++)
     {
        if(arr[i]!=mini)
        {
        arr[i]=mini;
        c++;
        }
     }
     cout<<c<<endl;
   
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}