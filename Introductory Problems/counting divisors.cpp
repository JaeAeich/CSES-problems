#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;


int CountDiv(int n){
    int c=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                c++;
            }
            else{
                c+=2;
            }
        }
    }
    cout<<c;
    return 0;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        CountDiv(a[i]);
        cout<<endl;
    }    
    return 0;
}