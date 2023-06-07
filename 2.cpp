// author : Mansi Agarwal
// 2023-03-25 17:07:17
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
    cin>>arr[i];
    int c=0;
    int mini=INT_MAX;
    for(int i=0;i<n-2;i++)
    {
        int x=arr[i]+arr[i+2];
        if(x%2==0)
        c++;
        mini=min(c,mini);
    }
    cout<<mini<<endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}