#include <bits/stdc++.h>
using namespace std;

// Concept of max disjoint intervals.
// Time complexity- O(NLog(N))-->due to sorting, Space Complexity =O(N).

// comparator function sorting the vector by second value increasingly.
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int s, e;
        cin >> s >> e;
        v.push_back({s, e});
    }
    // Sorting so we can greedily select the interval which will end first.
    sort(begin(v), end(v), cmp);
    int maxMov = 0, i = 0, prev_e = 0;
    while (i < n)
    {
        // If the i th movie starts after the previous movies, then increase counter.
        // update prev ending time for next iteration.
        if (v[i].first >= prev_e)
        {
            ++maxMov;
            prev_e = v[i].second;
        }
        // Else check for the next movie.
        i++;
    }
    cout << maxMov << endl;
    return 0;
}
// Code By - Jae Aeich