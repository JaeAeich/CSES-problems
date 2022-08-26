#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

ll gcd(ll a, ll b)
{
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a -= b;
        }
        else if (b > a)
        {
            b -= a;
        }
        else
        {
            return a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}

// int main(){
//     ll n;
//     cin>>n;
//     ll a[n];
//     for(ll i=0;i<n;i++){
//         cin>>a[i];
//     }
//     ll ans=0;
//     for(ll i=0;i<n;i++){
//         for(ll j=i+1;j<n;j++){
//             if(gcd(a[i],a[j])>ans){
//                 ans=gcd(a[i],a[j]);
//             }
//         }
//     }

//     cout<<ans;
//     return 0;
// }

int MaxArr(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

void CountPrime(int n, int *a)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // cout << "I am here\n";
            a[i] += 1;
            if (n / i != i)
            {
                cout<<"i was here!"<<endl;
                a[n / i] += 1;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = MaxArr(a, n);
    int ans[max + 1]={0};
    for (int i = 0; i < n; i++)
    {
        CountPrime(a[i], ans);
    }
    for (int i = max; i > 1; i--)
    {
        if (ans[i] >= 2)
        {
            cout << i;
            break;
        }
    }
    // for (int i=0;i<=max;i++){
    //     cout<<ans[i]<<endl;
    // }
    return 0;
}