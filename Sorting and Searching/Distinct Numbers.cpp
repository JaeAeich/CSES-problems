#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    ll n;
    cin>>n;
    set <int> m;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        m.insert(x);
    }
    cout<<m.size();
    return 0;
}