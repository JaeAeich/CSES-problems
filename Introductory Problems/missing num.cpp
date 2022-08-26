#include <bits/stdc++.h>
using namespace std;
 
int main(){
	unsigned long long int n;
	cin>>n;
	int arr[n];
	int diff=0,a=0;
    for(int k=0;k<n;k++){
		cin>>arr[k];
	}
	for (int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i]){
            continue;
        }
        else{
            diff=arr[i]-arr[i+1];
            a+=diff;
        }
    }
    cout<<a;
	return 0;
}