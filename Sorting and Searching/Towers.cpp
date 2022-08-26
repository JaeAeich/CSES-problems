#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        // finding the upper bound of i th index in ans vector.
        auto it = upper_bound(begin(ans), end(ans), v[i]);
        if (it == ans.end())
        {
            // if v[i] is the largest element uptill now in ans, then create a new tower.
            ans.push_back(v[i]);
        }
        else
        {
            // Else stack v[i] on top of upper bound.
            int idx = it - begin(ans);
            ans[idx] = v[i];
        }
    }
    cout << ans.size() << endl;
    return 0;
}
// Code By - Jae Aeich