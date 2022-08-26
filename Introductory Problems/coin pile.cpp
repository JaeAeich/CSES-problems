#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int abso(ll a){
    if(a<0){
        return -a;
    }
    return a;
}

int main(){
    int q;
    cin>>q;
    while(q--){
        ll a,b;
        cin>>a>>b;
        double x,y;
        x=(2*a-b)/3;
        y=(4*b-2*a)/6;
        if((a==2*b) || (b==2*a) || (2*x+y==a && 2*y+x==b)){
            cout<<"YES"<<endl;
        }        
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


