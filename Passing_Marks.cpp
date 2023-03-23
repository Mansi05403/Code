// author : Mansi Agarwal
// 2023-03-22 18:53:40
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
   
    sort(arr,arr+n);
   
        
          cout<<(arr[n-x]-1)<<endl;
         
    }



signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}