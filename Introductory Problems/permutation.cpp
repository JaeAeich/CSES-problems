#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    int n,a;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>a;
    int l=0,r=n-1;
    while(l<=r){
        int mid= (l+r)/2;
        if(arr[mid]==a){
            cout<<mid<<" ";
            break;
        }
        else if(arr[mid]<a){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}