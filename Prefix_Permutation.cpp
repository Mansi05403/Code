// author : Mansi Agarwal
// 2023-03-22 16:54:05
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    int arr[n],sum=0;
    vector<int> v;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
     for(int i=1;i<n;i++)
     {
         sum=sum+(arr[i] + arr[i+1]);
         if(sum%i !=0)
         v.push_back(i);
     }
     cout<<v<<endl;
     
}



signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}


/*while(t--){
  ll n;
  cin>>n;
  if(n%2==1){
      cout<<-1<<endl;
  }
  else{
      for(ll i=1;i<=n;i+=2){
          cout<<i+1<<" "<<i<<" ";
      }
      cout<<endl;
  }
  

}*/