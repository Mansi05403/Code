#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0;
        for(auto i: s){
            if(i=='1'){
                a++;
            }
            
        }
            if(s=="1" || s=="10"){
                cout<<"NO"<<endl;
            }
            else if(a<=3){ //if  number of 1's is >3 not possible
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    return 0;
}