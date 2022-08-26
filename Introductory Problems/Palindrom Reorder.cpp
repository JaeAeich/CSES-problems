#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

string rev(string s){
    string ans="";
    for(int i=s.length()-1;i>=0;i--){
        ans+=s[i];
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    unordered_map <char, int> m;
    string ans="";
    string last;
    for(int i=0;i<s.length();i++){
        if(m.find(s[i])==m.end()){
            m.insert(make_pair(s[i],1));
        }
        else{
            m[s[i]]++;
        }
    }
    int oc=0,ec=0;
    for(auto it=m.begin();it!=m.end();it++){
        if(((*it).second)%2==0){
            ec++;
        }
        else{
            oc++;
        }
    }
    if(oc==1){
        for(auto it=m.begin();it!=m.end();it++){
            if((*it).second%2==0){
                string temp;
                for(int i=0;i<(*it).second/2;i++){
                    temp+=(*it).first;
                }
                ans+=temp;
            }
            else{
                for(int i=0;i<(*it).second/2+1;i++){
                    last+=(*it).first;
                }
            }
        }
        ans+=last;
        string tempp=ans;
        tempp.pop_back();
        ans=ans + rev(tempp);
        cout<<ans;
    }
    else if(oc==0){
        for(auto it=m.begin();it!=m.end();it++){
            if((*it).second%2==0){
                string temp;
                for(int i=0;i<(*it).second/2;i++){
                    temp+=(*it).first;
                }
                ans+=temp;
            }
            else{
                for(int i=0;i<(*it).second;i++){
                    last+=(*it).first;
                }
            }
        }
        ans+=last;
        ans=ans + rev(ans);
        cout<<ans;
    }
    else{
        cout<<"NO SOLUTION";
    }
    return 0;
}