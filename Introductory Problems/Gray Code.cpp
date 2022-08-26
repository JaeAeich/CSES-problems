#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

vector<string> GrayCode(int n){
    if(n==1){
        return {"0","1"};
    }
    vector<string> prev=GrayCode(n-1);
    vector <string> mainans;
    for(int i=0;i<prev.size();i++){
        string x="0"+prev[i];
        mainans.push_back(x);
    }
    for(int i=prev.size()-1;i>=0;i--){
        mainans.push_back("1"+prev[i]);
    }
    return mainans;
}

int main(){
    int n;
    cin>>n;
    vector<string> ans=GrayCode(n);
    for(auto it=ans.begin();it!=ans.end();(it++)){
        cout<<*it<<endl;
    }
    return 0;
}