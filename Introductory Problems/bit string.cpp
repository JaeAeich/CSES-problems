#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    ll n;
    ll m=10e9+7;
    cin>>n;
    ll ans=1;
    for(ll i=0;i<n;i++){
        ans=((ans%m)<<1)%m;
    }
    cout<<ans%m;
    return 0;
}