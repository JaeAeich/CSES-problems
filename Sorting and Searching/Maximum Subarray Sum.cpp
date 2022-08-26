#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    ll n;
    cin>>n;
    int a[n];
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0 && flag == false){
            flag=true;
        }
    }
    
    long long prevsum=0;
    if(flag){
        long long cursum=INT_MIN;
        for (int i=0;i<n;i++){
            if(prevsum+a[i]>0){
                prevsum+=a[i];
                cursum=max(cursum,prevsum);
            }
            else{
                prevsum=0;
            }
        }
        cout<<cursum;
    }
    else{
        auto cursum=max_element(a,a+n);
        cout<<*cursum;
    }

    return 0;
}