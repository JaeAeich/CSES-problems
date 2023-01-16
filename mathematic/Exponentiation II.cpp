#include <bits/stdc++.h>
using namespace std;

// Using ETF and Euler theorem.
// a^b %m=(a^(b%phi(m)))%m......... Here phi(n) is totient function.

int binpow(int a, int b, int m)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = (res * 1LL * a) % m;
        }
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return res;
}

int main()
{
    int q;
    cin >> q;
    int m = 1e9 + 7;
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << binpow(a, binpow(b, c, m - 1), m) << endl;
    }
    return 0;
}
// Code By - Jae Aeich