#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int FactMod(int n){
    int m=1000000007;
    int ans=1;
    for(int i=1;i<+n;i++){
        ans=(ans%m*(i%m))%m;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<FactMod(n);
    return 0;
}