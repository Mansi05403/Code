// author : Mansi Agarwal
// 2023-06-07 20:33:07
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int MOD = 1000000007;
int solve()
{
    int n;
    cin>>n;

    vector<int> A(n);
    

    int totalGoodRemovals = 0;
    int prefixSum = 0;
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        prefixSum = (prefixSum + A[i]) % 2;

        if (prefixSum == 0) {
            totalGoodRemovals = (totalGoodRemovals + evenCount) % MOD;
        } else {
            totalGoodRemovals = (totalGoodRemovals + oddCount) % MOD;
        }
    }

    return totalGoodRemovals;

}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}