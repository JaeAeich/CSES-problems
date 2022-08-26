#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;


int main(){
    ll n,k;
    cin>>n>>k;
    vector <pair<int,int>> v;
    for(ll i =0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    ll fp=0,lp=n-1;
    sort(v.begin(),v.end());
    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second;
    // }
    while(fp<lp){
        if(v[fp].first+v[lp].first<k){
            fp++;
        }
        else if(v[fp].first+v[lp].first>k){
            lp--;
        }
        else {
            cout<<v[fp].second+1<<" "<<v[lp].second+1;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}