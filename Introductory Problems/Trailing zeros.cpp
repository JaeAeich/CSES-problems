#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;


int main(){
    ll n;
    cin>>n;
    ll pow5=1;
    ll ans=0;
    while(true){
        pow5*=5;
        if(n/pow5<1){
            break;
        }
        else{
        ans+=n/pow5;
        }
    }
    cout<<ans;
    return 0;
}