#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int m = 1e9 + 7;

void binpow(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        // If LSB is set then that will contribute to the answer.
        if (b & 1)
        {
            res = (res * a) % m;
        }
        // For each bit value of a will increase.
        a = (a * a) % m;
        // Right shifting b for next iteration.
        b >>= 1;
    }
    cout << res << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        binpow(a, b);
    }
    return 0;
}
// Code By - Jae Aeich