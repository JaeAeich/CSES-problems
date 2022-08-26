#include <bits/stdc++.h>
using namespace std;

// int max(int a, int b, int c)
// {
//     if (a > b)
//     {
//         if (a > c)
//             return a;
//         return c;
//     }
//     else
//     {
//         if (b > c)
//             return b;
//         return c;
//     }
// }

int main()
{
    int n, k;
    cin >> n >> k;
    set<int> s;
    s.insert(0);
    s.insert(n);
    int ans = INT_MIN;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        // for (int val : s)
        //     cout << val << " ";
        // cout << endl;
        auto it = s.lower_bound(x);
        auto lo = it;
        --lo;
        auto hi = it;
        hi++;
        cout << *lo << " " << *it << " " << *hi << endl;
        ans = max((*(hi) - *(it)), ans);
        ans = max(ans, (*(it) - *(lo)));
        cout << ans << endl;
    }
    return 0;
}
// Code By - Jae Aeich