#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int pos=(i*i)*(i*i-1)/2;   //total choices for two places in an nxn chess board
        int safepos=4*(i-1)*(i-2);  /* A knight can attack in a 2x3 space in 2 manner, so total 2x3 space 
                                       in vertical dir will be (n-1)*(n-2) and since two attacks can happen
                                       so total vertical attacks will be twice that, and since we have a horizontal
                                       dir too so total attacks will be 4 times (n-1)*(n-2) */
        cout<<pos-safepos<<endl;
    }
    return 0;
}