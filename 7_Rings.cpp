// author : Mansi Agarwal
// 2023-06-07 20:11:42
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n,x;
    cin>>n>>x;
    int e=n*x;
    string s=to_string(e);
    
        if(s.length()==5 && s[0]!='0')
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    

}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}