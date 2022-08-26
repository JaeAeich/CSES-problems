#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

// bool IsPrime(int n){
//     for (int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

int main(){
    int n;
    cin>>n;
    int m=1000000007;
    int NumDiv=0;
    int MultDiv=1;
    int SumDiv=0;
    for(int i=1;i<=sqrt(n);i++){
        // if(n%i==0){
        //     if(IsPrime(i)==true){
        //         // cout<<i<<endl;
        //         NumDiv++;
        //         SumDiv=(SumDiv%m)+i%m;
        //         MultDiv=((MultDiv%m)*(i%m))%m;
        //     }
        // }
        if(n%i!=i){
                NumDiv+=2;
                SumDiv=(SumDiv%m)+i%m+(n/i)%m;
                MultDiv=((MultDiv%m)*(i%m)*((n/i)%m))%m;
        }
        else{
            NumDiv++;
            SumDiv=(SumDiv%m)+i%m;
            MultDiv=((MultDiv%m)*(i%m))%m; 
        }
    }
    cout<<NumDiv<<endl<<SumDiv<<endl<<MultDiv;
    return 0;
}