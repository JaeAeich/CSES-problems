#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

ll const m=1e9+7;

int main(){
    ll n;
    cin>>n;
    ll ans=1;
    ll val=2;
    while(n>0){
        if(n%2==0){
            val=((val%m)*(val%m))%m;
            n/=2;
        }
        else{
            ans=((ans%m)*val)%m;
            n--;
        }
    }
    cout<<ans;
    return 0;
}