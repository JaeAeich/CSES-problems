#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

vector<int> ans1;
vector<int> ans2;

void pushval(int n){
    for(int i=1;i<=n/2;i++){
        if(i&1==1){
            ans1.push_back(i);
            ans1.push_back(n-i+1);
        }
        else{
            ans2.push_back(i);
            ans2.push_back(n-i+1);
        }
    }
}

int main(){
    int n;
    cin>>n;
    if(n%4==0){
        pushval(n);
    }
    else if(n%4==3){
        pushval(n-1);
        ans2.push_back(n);
    }
    else{
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    // sort(ans1.begin(),ans1.end());
    // sort(ans2.begin(),ans2.end());
    int l1=ans1.size();
    int l2=ans2.size();
    cout<<l1<<endl;
    for(int i=0;i<l1;i++){
        cout<<ans1[i]<<" ";
    }
    cout<<endl;
    cout<<l2<<endl;
    for(int i=0;i<l2;i++){
        cout<<ans2[i]<<" ";
    }
    return 0;
}