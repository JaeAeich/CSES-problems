#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for (ll i=0;i<k;i++){
        cin>>a[i];
    }
    ll ans=0;
    for (ll i=1;i<(1<<k);i++){
        ll c=0;
        ll bcheck=0;
        ll num=1;
// Check the num of bits in the mask and add the num of divisor respective to the mask to the counter.
        for (ll j=0;j<=log2(k)+1;j++){
            if((i>>j)&1==1){
                if(num<=n){
                   num*=a[j];
                }
                bcheck++;
            }
        }
        c=n/num;
// if set bit in the mask is even, add the counter to ans.
        if(bcheck&1==1){
            ans+=c;
        }
        else{
            ans-=c;
        }
    }
    cout<<ans;
    return 0;
}