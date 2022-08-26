#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    int n,m,k; cin>>n>>m>>k;
    priority_queue<int> ds;
    priority_queue<int> as;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ds.push(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        as.push(x);
    }
    int c=0;
    while(!ds.empty() && !as.empty()){
        // greedily trying to sell the largest appartment.
        if(abs(ds.top()-as.top())<=k){
            //if largest appartment matches the largest demand, the sell it and pop them from queue.
            c++;
            ds.pop();
            as.pop();
        }
        else{
            // if required size is more than we can offer, rejec the client and look for next largest client.
            if(ds.top()-as.top()>k){
                ds.pop();
            }
            //if largest desired appartment is more than the largest size we have then try to remove the largest appartment.
            else{
                as.pop();
            }
        }
    }
    cout<<c;
    return 0;
}