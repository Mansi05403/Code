// author : Mansi Agarwal
// 2023-03-25 13:12:16
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
     for(int i=0;i<n;i++)
    cin>>b[i];
    int maxi=INT_MIN;
    int pos=0;
   for(int i=0;i<n;i++)
   {
    if(a[i]>maxi)
    {
    maxi=a[i];
    pos=i;
    }
   }
   for(int i=0; i<n;i++)
   {
    if(a[i]==maxi && pos!=i)
    {
        if(b[i]>b[pos])
        pos=i;

    }
   }
   cout<<pos+1<<endl;





    }

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}