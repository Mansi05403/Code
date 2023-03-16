// author : Mansi Agarwal
// 2023-03-15 19:35:03
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int h,x,y;
    cin>>h>>x>>y;
    //if(h%x==0)
     if(x>y)
     {
        int m=h/x;
        if(h%x!=0)
        m++;
        cout<<m<<endl;
     }
     else{
        int g=(h-y)/x;
        if((h-y)%x!=0)
        g++;
        g++;
        cout<<g<<endl;

     }
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}