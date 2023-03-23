// author : Mansi Agarwal
// 2023-03-22 09:20:44
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    int c=0;
    //N 100 tak hai so maximum 100 integers aa skte hai 
    //so array created upto size 100 as it can have 100 integers
    int arr1[100],arr2[100];
   for(int i=0;i<n;i++)
   {
    cin>>arr1[i];
   }
   for(int i=0;i<n;i++)
   {
    cin>>arr2[i];
   }


     for(int i=0;i<n;i++)
    {
        if(arr1[i]>2*arr2[i] || arr2[i]>2*arr1[i])
        continue;
        else
        c++;

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