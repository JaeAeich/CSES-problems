#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n;
    cin>>n;
    int a[n];
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll maxx=INT_MAX;
    for (int i=1;i<(1<<n);i++){
        ll subsum=0,restsum=0;
        for(int j=0;j<log2(i)+1;j++){
            if((i>>j) &1==1 ){
                subsum+=a[j];
            }
        }
        restsum=sum-subsum;
        maxx=min(abs(restsum-subsum),maxx);
    }
    cout<<maxx;
    return 0;
}