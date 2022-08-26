#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll p=(n-1)/2;
    ll cost=0;
    for(ll i=0;i<n;i++){
        cost+=llabs(v[i]-v[p]);
    }
    cout<<cost;
    return 0;
}