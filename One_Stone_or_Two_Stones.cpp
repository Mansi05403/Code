// author : Mansi Agarwal
// 2023-03-22 01:47:28
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
  
//https://www..com/problems/ONEORTWO?tab=statement

void solve()
{
    long long  x,y;
    cin>>x>>y;
   long long dif=abs(x-y);
   //3 cases
   //dif >=2 dif=0 dif=1
   if(dif>=2)
   {
    if(x>y)
    cout<<"chef"<<endl;
    else
    cout<<"chefina"<<endl;
   }
   else if(x==y)
   {
    if(x%2==0)
    cout<<"chefina"<<endl;
    else
    cout<<"chef"<<endl;
   }
   else if(dif==1)
   {
    long long mn=min(x,y);
    if(mn%2==0)
    cout<<"chefina"<<endl;
    else
    cout<<"chef"<<endl;
   }
}



signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}