#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

set <string> finans;

void perm(string s,string ans){
    if(!s.length()){
        finans.insert(ans);
        return ;
    }
    for(int i=0;i<s.length();i++){
        string right_str=s.substr(0,i);
        string left_str=s.substr(i+1);
        string rest=right_str+left_str;
        perm(rest,ans+s[i]);
    }
}

int main(){
    string s;
    cin>>s;
    perm(s,"");
    cout<<finans.size()<<endl;
    for (auto it=finans.begin();finans.end()!=it;it++){
        cout<<*it<<endl;
    }
    return 0;
}