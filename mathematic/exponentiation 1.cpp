#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int modL(ll b,ll p){
    int ans=1;
    for(ll i=0;i<p;i++){
        ans=((ans%1000000007)*b)%(1000000007);
    }
    cout<<ans<<endl;
    return 0;
}

int main(){ 
    int n;
    cin>>n;
    ll a[2*n];
    for (int i=0;i<2*n;i++){
        cin>>a[i];
    }
    for(int i=0;i<2*n;i+=2){
        modL(a[i],a[i+1]);
    }
    return 0;
}