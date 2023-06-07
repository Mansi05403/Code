#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        c++;
    }
    return min(c,n-c);
}