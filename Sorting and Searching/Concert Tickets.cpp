#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    // Keeping the track of ticket price and max price.
    multiset<int> tp;
    vector<int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        tp.insert(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        mp.emplace_back(x);
    }
    // Finding the upper limit of max price.
    for (int i = 0; i < m; i++)
    {
        auto it = tp.upper_bound(mp[i]);
        // If the upper limit is the first ele that mean no affordable price present.
        if (it == tp.begin())
        {
            cout << -1 << endl;
        }
        // Else print the very last ele of that pointer.
        else
        {
            cout << *(--it) << endl;
            tp.erase(it);
        }
    }
    return 0;
}

// Code By - Jae Aeich