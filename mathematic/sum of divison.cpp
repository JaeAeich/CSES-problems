#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
map<int, int> m;

void div(long int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            m[i]++;
            n /= i;
        }
    }
    if (n > 1)
    {
        m[n]++;
    }
}

int binpow(long long int a, long long int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = (a * 1LL * res) % mod;
        }
        a = (a * 1LL * a) % mod;
        b >>= 1;
    }
    return res;
}

int main()
{
    long int n;
    cin >> n;
    div(n);
    int ans = 1;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        int gp = (binpow(it->first, it->second + 1) - 1) / (it->first - 1);
        ans = (ans * 1LL * gp) % mod;
    }
    cout << ans << endl;
    return 0;
}
// Code By - Jae Aeich