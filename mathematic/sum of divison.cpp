// sum of divisor mod 1000000007
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

ll ModDivSum(ll n){
    ll ans=0;
    ll m=1000000007;
    for(ll i=1;i<=sqrt(n);i++){
        // ans=((ans%m)+(i%m+((n/i)%m)));
        // if(ans>m){
            if(n/i!=i && n%i==0){
                ans=((ans+(i%m)+((n/i)%m)))%m;
            }
            else if(n/i==i && n%i==0){
                ans=((ans)+(i%m))%m;
            }
            else{
                continue;
            }
        // }
        // else{
        //     if(n/i!=i && n%i==0){
        //         ans+=i+n/i;
        //     }
        //     else if(n/i==i && n%i==0){
        //         ans+=i;

        //     }
        //     else{
        //         continue;
        //     }
        // }
    }
    return ans;
}

ll SumDiv(ll n){
    ll ans=0;
    for(ll i=1;i<=sqrt(n);i++){
        if(n/i!=i && n%i==0){
            ans+=i+n/i;
        }
        else if(n/i==i && n%i==0){
            ans+=i;

        }
        else{
            continue;
        }
    }
    return ans;
}

int main(){
    ll n;
    cin>>n;
    ll m=1000000007;
    ll ans=0;
    for (ll i=1;i<=n;i++){
        ans=(ans%m+ModDivSum(i)%m)%m;
    }
    // cout<<SumDiv(n);
    cout<<ans;
    return 0;
}

// (a+b)%m=((a%m)+(b%m))%m