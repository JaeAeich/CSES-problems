#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main()
{
    int n;
    cin >> n;
    int siz = 200005;
    vector<int> v(siz, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 1;
    for (int i = 0; i < siz; i++)
    {
        if (v[i] < i)
            ans++;
    }
    cout << ans;
    return 0;
}