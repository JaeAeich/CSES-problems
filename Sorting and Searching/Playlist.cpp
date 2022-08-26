#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    int n;
    cin>>n;
    map<int,int> m;
    vector<int> v;
    for(int i=0;i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans=0;
    for (int i=0,j=0;i<n;i++){
        while(j<n && m[v[j]]<1){
        m[v[j]]++;
        j++;
        }
        ans=max(ans,j-i);
        m[v[i]]--;
    }
    cout<<ans;
    return 0;
}