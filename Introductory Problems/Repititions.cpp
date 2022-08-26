#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    string s;
    cin>>s;
    ll ans=0;
    ll c=0;
    char last;
    for (int i=0;i<s.length();i++){
        // last=s[i];
        if(s[i]!=last){
            ans=max(ans,c);
            c=1;
        }
        else {
            c++;
        }
        last =s[i];
    }
    ans=max(ans,c);
    c=1;
    cout<<ans;
}