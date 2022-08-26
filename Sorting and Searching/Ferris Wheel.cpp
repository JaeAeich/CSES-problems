#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    int n,k;cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // sorting so we can greedily select children.
    sort(begin(v),end(v));
    int c=0;
    for(int i=0,j=n-1;i<=j;){
        int sum=0;
        // greadily slecting the heviest person.
        sum+=v[j],j--;
        if(sum+v[i]<=k && j>=i){
            //selecting the lightest guy if its possible.
            i++;
        }
        cout<<endl;
        c++;
    }
    cout<<c;
}